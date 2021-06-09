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
		head->pre=NULL;
		head->data = data;
		head->next = NULL;
		temp = head;
		tail=temp;
		len++;
		for(i=1;i<n;i++)
		{
			newnode =  (struct node *)malloc(sizeof(struct node));
			if(newnode == NULL)
			{
				printf("NO SAPCE ALLOCATED");
				exit(0);
			}
			else
			{
				printf("space allocated successfully\n");
				printf("enter the data for %d: ",i+1);
				scanf("%d", &data);
				newnode->data = data;
				newnode->next = NULL;
				temp->next = newnode;
				newnode->pre=temp;
				
				temp = temp->next;
				tail=newnode;
				len++;
			}
		}
	}
}

void add_beg(int n)
{
    struct node *newnode;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->pre = NULL;
    newnode->data = n;
    newnode->next=head;
    head->pre = newnode;
    head = newnode;
    len++;
}

void delete_end()
{
	if (head == NULL || head->next==NULL)
	{
		free(head);
		head = NULL;
	}
    	else
    	{
		struct node*temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->pre=NULL;
		free(temp);
		printf("Deleted last element Successfully\n");
	}
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
        if (head->next == NULL)
            tail = head = NULL; 
        else
        {
		    head = head->next;
		    head->pre = NULL;
        }
               
		free(temp);
        printf("\nDELETED %d'th node SUCCESSFULLY\n\n\n", pos);
        len--;
        return 0;
    }
    else{
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
                else{
                    tail = temp->pre;
                }
		free(temp);
                printf("\nDELETED %d'th node SUCESSFULLY\n\n\n", pos);
                len--;
                return 0;
            }
            temp = temp->next;
            i++;
        }
        printf("\nNot a valid position...\n\n\n");
    } 
}

void delete_middle()
{
    int k;
    if(len%2==0)
    {
        k=len/2;
    }
    else
    {
        k=len/2+1;
    }
    delete_pos(k);

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
		while(temp != NULL)
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
	}
}

void display_reverse()
{
    struct node *temp=tail;
    while(temp!=NULL)
    {
    	printf("%d\t",temp->data);
    	temp=temp->pre;
    }
}


int main()
{
	int n,m,p;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	create(n);
	display();
	delete_pos(3);
	display();
    	/*delete_middle();
    	display();
    	printf("Ente the element to add at beginning\n");
    	scanf("%d",&p);
    	add_beg(p);
    	display();
    	printf("Revering\n");
    	display_reverse();*/
	return 0;
}
