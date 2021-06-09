#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*fnode;

void create(int n)
{
	struct node *newnode, *temp;
	int i, data;
	fnode = (struct node *)malloc(sizeof(struct node));
	if(fnode == NULL)
	{
		printf("NO SPACE ALLOCATED");
		exit(0);
	}
	else
	{
		printf("space allocated successfully\n");
		printf("enter the data for 1: ");
		scanf("%d", &data);
		fnode->data = data;
		fnode->next = NULL;
		temp = fnode;
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
				printf("Space allocated successfully\n");
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

void display()
{
	struct node* temp;
	if(fnode==NULL)
	{
		printf("List is empty");
	}
	else
	{ 
		int i=1;
		temp = fnode;		
		while(temp != NULL)
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
	}
}

int main(){
	int n;
	printf("Enter the Number of Elements: ");
	scanf("%d",&n);
	create(n);
	display();
	return 0;
}
