#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * link;
}*fnode;

void create(int n)
{
	struct node *new,*temp;
	int i,data;
	fnode=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("Space is not allocated\n");
	}
	else
	{
		printf("Space is successfully allocated\n");
		printf("Enter the element of node 1 :");
		scanf("%d",&data);
		fnode->data=data;
		fnode->link=NULL;
		temp=fnode;
		for(int i=1;i<n;i++)
		{
			new=(struct node*)malloc(sizeof(struct node));
			if(new==NULL)
			{
				printf("space is not allocated\n");
			}
			else
			{
				printf("Space is successfully allocated\n");
				printf("Enter the element the node %d : ",i+1);
				scanf("%d",&data);
				new->data=data;
				new->link=NULL;
				temp->link=new;
				temp=temp->link;	
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
			temp = temp->link;
			i++;
		}
	}
}
int main()
{
	int n;
	printf("Enter the size of the node:\n");
	scanf("%d",&n);
	create(n);
	display();
	return 0;
}
