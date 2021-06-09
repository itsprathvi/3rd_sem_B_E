#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *pre;
	int data;
	struct node * next;
}*head=NULL;

void create()
{
	struct node *newnode,*temp;
	int i=2,data;
	head=(struct node*)malloc(sizeof(struct node));
	if(newnode=NULL)
	{
		printf("Space is not allocated\n");
		return;
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
		head->pre=NULL:
		temp=head;
		while(1)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("Space is not allocated\n");
				return;
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
				newnode->pre=temp;
				
				temp=temp->next;
				i++;
			}
		}
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

void insert_beg(int val)
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
    printf("Inserted Successfully\n");  
}

void insert_end(int val)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	struct node *temp = head;
	if(head == NULL)
	{
		newnode->pre=NULL;
		newnode->next=NULL;
		head=newnode;
    }
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	newnode->pre=temp;
	temp->next=newnode;
	newnode->next=NULL;	
	}
	printf("Inserted Successfully\n");
}

void insert_reg(int n)
{
	int ele,i=1;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element to insert\n");
	scanf("%d",&ele);
	newnode->data=ele;
	struct node *temp=head;
	if(n==1)
	{
		newnode->pre=NULL;
		newnode->next=NULL;
		head=newnode;
		printf("%d Node inserted at Position %d\n",ele,i);
		return ;
	}
	else
	{
		int i=1;
		struct node *temp=head;
		for(i=2;i<n;i++)
		{
			temp=temp->next;
		}
		newnode->pre=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		printf("Inserted Successfully\n");
	}
}

void delete_beg()
{
	struct node* temp=head;
	if(head=NULL)
	{
		printf("No element in the Node\n");
		return;
	}
	else
	{
		head=temp->next;
		head->pre=NULL;
		free(temp);
	}
	printf("Deleted first Node Successfully\n");

}

void delete_end()
{
	struct node *previous;
	struct node *temp=head;
	temp=head;
	previous=temp;
	if(head==NULL)
	{
		printf("No element in the Node\n");
		return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			previous=temp;
			temp=temp->next;
		}
		temp->pre=NULL;
		previous->next=temp->next;
		free(temp);
		printf("Deleted Last Node Successfully\n");
	}
}

void delete_ele(int ele)
{
	struct node* temp=head;
	if(head==NULL)
	{
		printf("No element in the node\n");
		return;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data==ele)
			{
				temp->pre->next=temp->next;
				temp->next->pre=temp->pre;
				free(temp);
				printf("Deleted %d Node Successfully\n",ele);
				return;
			}
			temp=temp->next;	
		}
		printf("value not found\n");	
	}
}

int main()
{
	int ele,arg,pos;
	create();
	display();
	while(1)
	{
		printf("Select the Options\n\n1.Insert_beginning\n2.Insert_end\n3.Insert_region\n4.Display\n5.Exit\n6.Delete_beg\n7.Delete_end\n8.Delete_element\n");
		scanf("%d",&arg);
		switch(arg)
		{
			case 1:printf("Enter the element to Insert at beginning\n");
				scanf("%d",&ele);
				insert_beg(ele);
				break;
			case 2:printf("Enter the element to Insert at end\n");
				scanf("%d",&ele);
				insert_end(ele);
				break;
			case 3:printf("Enter the Position to Insert\n");
				scanf("%d",&pos);
				insert_reg(pos);
				break;
			case 4:display();
				break;
			case 5:exit(0);
				break;
			case 6:delete_beg();
				break;
			case 7:delete_end();
				break;
			case 8:printf("Enter which node to be Deleted\n");
				scanf("%d",&ele);
				delete_ele(ele);
				break;
			default:printf("Enter valid input\n");
			return 0;
		}
	}
}
