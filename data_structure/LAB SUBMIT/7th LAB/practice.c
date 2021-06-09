#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *pre;
	int data;
	struct node *next;
}*head=NULL;
int len=0;
struct node *tail=NULL;

void create(int n)
{
	struct node *newnode,*temp;
	int data;
	head=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("No space allocated");
		exit(0);
	}
	else
	{
		printf("Space allocated Successfully\n");
		printf("Enter the Element of Node 1 : ");
		scanf("%d",&data);
		head->pre=NULL;
		head->data=data;
		head->next=NULL;
		temp=head;
		tail=temp;
		len++;
		for(int i=1;i<n;i++)
		{
			newnode=(struct node *)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("No space allocated");
				exit(0);
			}
			else
			{
				printf("Enter the Element of Node %d : ",len+1);
				scanf("%d",&data);
				newnode->data=data;
				newnode->next=NULL;
				temp->next=newnode;
				newnode->pre=temp;
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
	int n=1;
	temp=head;
	if(head==NULL)
	{
		printf("No element in the Node");
		return;
	}
	while(temp!=NULL)
	{
		printf("The Node %d has element %d \n",n,temp->data);
		temp=temp->next;
		n++;
	}
}

void display_rev()
{
	struct node *temp=tail;
	while(temp!=NULL)
	{
		printf("%d \t",temp->data);
		temp=temp->pre;
	}
	printf("\n");
}

void add_beg(int data)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->pre=NULL;
	newnode->data=data;
	newnode->next=head;
	head->pre=newnode;
	head=newnode;
	len++;
}

void add_end(int data)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	tail->next=newnode;
	newnode->pre=tail;
	tail=newnode;
	len++;
}

void delete_first()
{
	if(head==NULL || head->next==NULL)
	{
		free(head);
		head=tail=NULL;
	}
	else
	{
		struct node *temp=head;
		head=head->next;
		head->pre=NULL;
		free(temp);
		len--;
	}
}

void delete_last()
{
	struct node *temp=tail;
	temp->pre=tail;
	tail->pre=NULL;
	free(temp);
}


int main()
{
	int n;
	printf("Enter the size of the Node : ");
	scanf("%d",&n);
	create(n);
	display();
	display_rev();
	add_end(60);
	add_beg(5);
	display();
	printf("\n%d",len);
	return 0;
}