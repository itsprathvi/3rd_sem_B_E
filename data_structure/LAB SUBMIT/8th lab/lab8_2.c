#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *pre;
	struct node *next;
	int data;
}*head=NULL;
struct node *tail=NULL;
int len=0;

void create(int n)
{
	struct node *newnode, *temp;
	int data;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("No space is Allocated\n");
		exit(0);
	}
	else
	{
		printf("Enter the element of Node 1 : ");
		scanf("%d",&data);
		head->data=data;
		head->next=NULL;
		temp=head;
		tail=temp;
		head->pre=tail;
		len++;
		for(int i=1;i<n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("No space is Allocated\n");
				exit(0);
			}
			else
			{
				printf("Enter the element of Node %d : ",i+1);
				scanf("%d",&data);
				newnode->data=data;
				newnode->next=temp->next;
				newnode->pre=temp;
				temp->next=newnode;
				temp=temp->next;
				tail=temp;
				len++;
			}
		}
		head->pre=tail;
		tail->next=head;
	}
}

void display()
{
	struct node *temp;

	if(head==NULL)
	{
		printf("Node is empty\n");
		exit(0);
	}
	else
	{
		temp=head;
		int p=1;
		do
		{
			printf("The Node %d containing the data %d\n",p,temp->data);
			temp=temp->next;
			p++;
		}
		while(temp!=head);
	}
}

void display_reverse()
{
	struct node *temp;

	if(head==NULL)
	{
		printf("Node is empty\n");
		exit(0);
	}
	else
	{
		temp=tail;
		int len=len-1;
		do
		{
			printf("The Node %d containing the data %d\n",len,temp->data);
			temp=temp->pre;
			len--;
		}
		while(temp!=tail);
	}
}


//Add header node to the Doubly linked list

void add_beg(int ele)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
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
		head=newnode;
		tail->next=head;;
	}
	
}


int main()
{
	int a,b;
	printf("Enter the Number of Nodes : ");
	scanf("%d",&a);
	create(a);
	display();
	printf("Enter the Node at the beginning : ");
	scanf("%d",&b);
	add_beg(b);
	display();
	display_reverse();
	return 0;
}