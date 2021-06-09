#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node *head=NULL;

void insert(int data)
{
	struct node *new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->next=head;
	head = new;		
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
			printf("Node %d has data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
	}
}

int main()
{
	int n,i,num;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value for node %d: \n",i+1);
		scanf("%d",&num);
		insert(num);
	}
	display();
	return 0;
}
