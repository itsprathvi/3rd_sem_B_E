#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;

void create()
{
	struct node *newnode,*temp;
	int i=2,data;
	head=(struct node*)malloc(sizeof(struct node));
	if(newnode=NULL)
	{
		printf("Space is not allocated\n");
		exit(0);
	}
	else
	{
		printf("Space is allocated successfully,Enter -1 to stop\n");
		printf("Enter the data for node 1 : ");
		scanf("%d",&data);
	if(data==-1)
	   return;
		head->data=data;
		head->next=NULL;
		temp=head;
		while(1)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("Space is not allocated\n");
				exit(0);
			}
			else
			{
				printf("Space is successfully allocated\n");
				printf("Enter the data for %d node : ",i);
				scanf("%d",&data);
			if(data==-1)
			    break;
				newnode->data=data;
				newnode->next=NULL;
				temp->next=newnode;
				temp=temp->next;
				i++;
			}
		}
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Space is empty\n");
	}
	else
	{
		temp=head;
		int i=1;
		while(temp!=NULL)
		{
			printf("The node %d contains the data %d\n",i,temp->data);
			temp=temp->next;
			i++;
		}
	}
}

int insert_before()
{
	struct node *newnode, *ptr, *preptr;
	int n, val;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data for new node: ");
	scanf("%d", &newnode->data);
	printf("\nEnter the vlaue before which the node to be inserted: ");
	scanf("%d", &val);
	ptr = head;
	preptr = ptr;
	if(preptr->data == val)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		while(ptr->data!=val)
		{
			preptr = ptr;
			ptr = ptr->next;
			if(ptr == NULL)
			{
				printf("Value not found...\n");
				return 1;
			}
		}
			preptr->next = newnode;
			newnode->next = ptr;
	}
}
	
int main()
{
	int arg,ele,pos;
	create();
	display();
	while(1)
	{
		printf("Enter -2 to insert\t Enter -3 to display\t Enter 0 to Exit\n");
		scanf("%d",&arg);
		if(arg == -2)
		{
			insert_before();
		}
		else if(arg == -3)
		{
			display();
		}
		else if(arg==0)
		{
			exit(0);
		}
		else
		{
			printf("Enter valid Number\n");
		}
	}
}
	
