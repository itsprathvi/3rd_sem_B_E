#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
int count=1;
struct node *head = NULL;

void create()
{
	struct node *newnode,*temp;
	int data;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("Node is not created Successfully\n");
		exit(0);
	}
	else
	{
		printf("Node is created Successfully\n");
		printf("Enter the element of 1 node : ");
		scanf("%d",&data);
	if(data==-1)
	  return ;
		head->data=data;
		head->next=NULL;
		count++;
		temp=head;
		while(1)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(head==NULL)
			{
				printf("Node is not created Successfully\n");
				exit(0);
			}
			else
			{
				printf("Node is created Successfully\n");
				printf("Enter element of the %d node : ",count);
				scanf("%d",&data);
			if(data==-1)
			  return ;
				newnode->data=data;
				newnode->next=NULL;
				temp->next=newnode;
				temp=temp->next;
				count++;
			}
		}
	}
}

void insert_beg(int n)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=n;
	new->next=head;
	head=new;
	printf("Element %d inserted Successfully\n",n);
}

void insert_end(int n)
{
	struct node *temp,*new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=n;
	new->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
	printf("Element %d inserted Successfully\n",n);
}

void insert_n(int pos,int n)
{
	struct node *pre,*temp,*new;
	new=(struct node*)malloc(sizeof(struct node));

	temp=head;
	int i=2;
	if(pos==1)
	{
		new->data=n;
		new->next=head;
		head=new;
		printf("Element %d inserted Successfully\n",n);
		exit(0);
	}
	else
	{
		while(temp!=NULL)
		{
			if(pos==i)
			{
				new->data=n;
				new->next=temp->next;
				temp->next=new;
				printf("\nInserted %d at %d'th node SUCESSFULLY\n\n\n", n, pos);
                return;
			}
		temp=temp->next;
		}
	}
	printf("Not a valid position\n");
}


void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("Node is Empty\n");
		exit(0);
	}
	else
	{
		temp=head;
		int i=1;
		while(temp!=NULL)
		{
			printf("%d node contains element %d",i,temp->data);
			printf("\n");
			temp=temp->next;
			i++;
		}
	}
}

void delete(int val)//int pos
{
	struct node *temp,*pre;
	temp=head;
	pre=temp;
	//int i=1;
	if(temp->data==val) //if(pos==1)
	{
		head=temp->next;
		free(temp);
		printf("%d deleted successfully\n",val);
		return ;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data==val)//if(pos==i)
			{
				pre->next=temp->next;
				free(temp);
				printf("%d deleted successfully\n",val);
				return;
			}
			pre=temp;
			temp=temp->next;
			//i++;
		}
	}
}


void delete_beg()
{
	struct node *temp;
	temp=head;
	head=temp->next;
	free(temp);
	printf("Deleted successfully\n");
	return ;
}

void delete_end()
{
	struct node *temp,*pre;
	temp=head;
	pre=temp;
	while(temp->next!=NULL)
	{
		pre=temp;
		temp=temp->next;
	}
	pre->next=NULL;
	free(temp);
	printf("Deleted successfully\n");
	return ;
}

int main()
{
	create();
	display();
	insert_n(2,25);
	insert_beg(5);
	insert_end(50);
	display();
	return 0;
}