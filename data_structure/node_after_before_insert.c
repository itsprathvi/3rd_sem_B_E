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
	printf("\n");
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
		printf("\n");
	}
}


int insert_after()
{
	struct node *newnode, *ptr, *preptr;
	int n, val;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data for new node: ");
	scanf("%d", &newnode->data);
	printf("\nEnter the value after which the node to be inserted: ");
	scanf("%d", &val);
	ptr = head;
	preptr = ptr;
	if(preptr->data == val)
	{
		newnode->next = head->next;
		head->next = newnode;
	}
	else
	{
		while(preptr->data!=val)
		{
			preptr = ptr;
			ptr = ptr->next;
			if(preptr == NULL)
			{
				printf("Value not found...\n");
				return 1;
			}
		}
			preptr->next = newnode;
			newnode->next = ptr;
			printf("Element inserted Successfully\n");
	}
}

int delete()
{
    struct node *temp;
    int pos;
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    if(pos==1)
    {
    	temp=head;
    	head=head->next;
    	temp->next=NULL;
    	free(temp);
    }
    else
    {
    	struct node *p=head,*q;
    	int i=0;
    	while(i<pos-1)
    	{
    		p=p->next;
    		if(p==NULL)
    		{
    			printf("Invalid Position\n");
    			return 1;
    		}
    		i++;
	}
	q=p->next;
	p->next=q->next;
	q->next=NULL;
	free(q);
    }
}
	
int main()
{
	int arg,ele,pos;
	create();
	display();
	while(1)
	{
		printf("Enter -2 to insert\t Enter -3 to display\t Enter -4 to delete \t Enter 0 to Exit\n");
		scanf("%d",&arg);
		if(arg == -2)
		{
			insert_after();
		}
		else if(arg == -3)
		{
			display();
		}
		else if(arg == -4)
		{
			delete();
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
	
