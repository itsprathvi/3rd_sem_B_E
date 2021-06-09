#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *join;
}*firstnode;

void read(int n)
{
	struct node *newnode,*temp;
	int data;
	firstnode=(struct node*)malloc(sizeof(struct node));	
	if(firstnode=NULL)
	{
		printf("Node is not allocated\n");
	}
	else
	{
		printf("Node is allocated\n");
		printf("Enter the value of the 1 node ");
		scanf("%d",&data);
		firstnode->data=data;
		firstnode->join=NULL;
		temp=firstnode;
		for(int i=1;i<n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode=NULL)
			{
				printf("space is allocated\n");
			}
			else
			{
				printf("Enter the element in the %d node",i);
				scanf("%d",&data);
				newnode->data=data;
				newnode->join=NULL;
				temp->join=newnode;
				temp=temp->join;
			}
		}
	}
}
void display()
{
	struct node *temp;
	if(temp=NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		int i=1;
		temp=firstnode;
		while(temp!=NULL)
		{
			printf("The node %d having data = %d \n",i,temp->data);
			temp=temp->join;
			i++;
		}
	}
}


int main()
{
	int n;
	printf("Enter the Number of the Nodes\n");
	scanf("%d",&n);
	read(n);
	printf("The values of the nodes \n");
	display();
	return 0;
}





