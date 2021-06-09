#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
	int data;
	struct node * next;
}*head=NULL;

int len=0;
struct node *tail=NULL;
void create(int n)
{
	struct node *newnode, *temp;
	int i, data;
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("NO SPACE ALLOCATED");
		exit(0);
	}
	else
	{
		printf("enter the data for 1: ");
		scanf("%d", &data);
		head->data = data;
		head->next = NULL;
		temp = head;
		tail=temp;
		head->pre=tail;
		len++;
		for(i=1;i<n;i++)
		{
			newnode =  (struct node *)malloc(sizeof(struct node));
			if(newnode == NULL)
			{
				printf("NO SPACE ALLOCATED");
				exit(0);
			}
			else
			{
				printf("space allocated successfully\n");
				printf("enter the data for %d: ",i+1);
				scanf("%d", &data);
				newnode->data=data;
				newnode->next=temp->next;
				newnode->pre=temp;
				temp->next=newnode;
				temp=temp->next;
				tail=temp;
			}
		}
		head->pre=tail;
		tail->next=head;
	}
}

void display()
{
	struct node* temp;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{ 
		int i=1;
		temp = head;		
		do
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
		while(temp!=head);
	}
}

void display_rev()
{
	struct node* temp;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{ 
		int i=1;
		temp = tail;		
		do
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->pre;
			i++;
		}
		while(temp!=tail);
	}
}

void add_beg(int val)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL)
	{
		newnode->next=newnode;
		head=newnode;
		tail=head;
		head->pre=tail;
	}
	else
	{
		newnode->next=head;
		head->pre=newnode;
		newnode->pre=tail;
		tail->next=newnode;
		head=newnode;
	}
	len++;
	printf("Inserted successfully\n");
}

void add_end(int val)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL)
	{
		newnode->next=newnode;
		head=newnode;
		tail=head;
		head->pre=tail;
	}
	else
	{
		newnode->next=tail->next;
		newnode->pre=tail;
		tail->next=newnode;
		tail=newnode;
		head->pre=tail;
	}
	len++;
	printf("Inserted successfully\n");
}

void add_pos(int pos,int data)
{
	struct node *temp,*previous;
	temp=head;
	previous=temp;

	struct node *newnode =  (struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	int i=1;
	do
	{
		if(i==pos)
		{
			newnode->pre=temp->pre;
			newnode->next=temp;
			temp->pre=newnode;
			previous->next=newnode;
			printf("Inserted Successfully\n");
			return;

		}
		previous=temp;
		temp=temp->next;
		i++;
	}
	while(temp!=head);
	len++

}

void delete_beg()
{
	struct node *temp=head;
	head=head->next;
	head->pre=tail;
	free(temp);
	tail->next=head;
	len--;
	printf("Deleted beginning element\n");
}

void delete_end()
{
	struct node *temp=tail;
	tail=tail->pre;
	free(temp);
	tail->next=head;
	head->pre=tail;
	len--;
	printf("Deleted end element\n");
}

int delete_pos(int pos)
{
	struct node* temp;
    	int i=2;
	temp = head;
    if (pos <= 0)
    {
        printf("Invalid pos!!\n");
        return 0;
    }
    
    if (pos == 1)
    {
        delete_beg();
        return 0;
    }
    if(pos==len)
    {
    	delete_end();
    }
    else
    {
        temp=temp->next;
        while (temp != NULL)
        {
            if(i == pos)
            {
                temp->pre->next = temp->next;
                if (temp->next != NULL)
                {
                    temp->next->pre = temp->pre;
                }
                else
                {
                    tail = temp->pre;
                }
		        free(temp);
                printf("\nDELETED %d'th node SUCESSFULLY\n", pos);
                len--;
                return 0;
            }
            temp = temp->next;
            i++;
        }
        printf("\nNot a valid position...\n\n\n");
    } 
}



int main()
{
	int n,z,p,m,b,c;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	create(n);
	display();
	printf("Enter the element at beginning\n");
	scanf("%d",&z);
	add_beg(z);
	display();
	printf("Enter the element at end\n");
	scanf("%d",&p);
	add_end(p);
	display();
	printf("Reversed\n\n");
	display_rev();
	delete_beg();
	display();
	printf("\n\n");
	delete_end();
	display();
	printf("Enter the Position to delete= ");
	scanf("%d",&m);
	delete_pos(m);
	display();
	printf("Enter the Position and Element to Insert\n ");
	scanf("%d %d",&b,&c);
	add_pos(b,c);
	display();
	return 0;
}
