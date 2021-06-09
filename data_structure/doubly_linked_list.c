#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
	int data;
	struct node * next;
}*head=NULL;

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
		printf("space allocated successfully\n");
		printf("enter the data for 1: ");
		scanf("%d", &data);
		head->data = data;
		head->next = NULL;
		temp = head;
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
				newnode->data = data;
				newnode->next = NULL;
				temp->next = newnode;
				temp = temp->next;
			}
		}
	}
}

void insert(int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    if(head==NULL)
    {
        newnode->pre=NULL;
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->pre=NULL;
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
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
		while(temp != NULL)
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
	}
}

int main()
{
	int n,m;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	create(n);
	display();
    printf("Forward Printing\n");
    printf("Enter the element which is Insert at beginning : ");
    scanf("%d",&m);
    insert(m);
    printf("Forward Printing\n");
    display();
	return 0;
}


/* void display()
{
    struct node *temp;
    struct node *last;
    if(fnode==NULL)
	{
		printf("List is empty\n");
	}
    do
    {
    int i=1;
    printf("%d has data %d\n",i,temp->data);
    last=temp;
    temp=temp->next; 
    i++; 
    }
    while(temp!=NULL);
    printf("Backward Traversing DLL\n");
    temp=last;
    while(temp!=NULL)
    {
       printf("%d data\n",temp->data);
       temp=temp->pre;
    }
    printf("\n");
} */





