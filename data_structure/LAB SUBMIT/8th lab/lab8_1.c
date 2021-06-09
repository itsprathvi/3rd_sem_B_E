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
		head->pre=NULL;
		head->next=NULL;
		temp=head;
		tail=temp;
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
				newnode->next=NULL;
				newnode->pre=temp;
				temp->next=newnode;

				temp=temp->next;
				tail=newnode;
				len++;
			}
		}
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
		while(temp!=NULL)
		{
			printf("The Node %d containing the data %d\n",p,temp->data);
			temp=temp->next;
			p++;
		}
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
		while(temp!=NULL);
	}
}

//Add header node to the Doubly linked list

void add_beg(int ele)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->pre=NULL;
	newnode->next=head;
	head->pre=newnode;
	head=newnode;
	len++;
	
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