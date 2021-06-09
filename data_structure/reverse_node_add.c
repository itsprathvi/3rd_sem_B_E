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
		printf("Enter the data for 1 node : ");
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

void reverse()
{
	struct node *link,*prev,*cur;
	int i=1;
	prev=NULL;
	link=head;
	cur=head;
	printf("\nprev->%p\nlink->%p\ncur->%p\n\n", prev, link, cur);
	while(cur!=NULL)
	{
		link=link->next;
		cur->next=prev;
		printf("\n[%d]\nprev->%p\nlink->%p\ncur->%p\n\n",i, prev, link, cur);
		prev=cur;
		cur=link;
		i++;
	}	
	head=prev;
}



int main()
{
	create();
	display();
	reverse();
	printf("THE NODE AFTER REVERSING\n");
	display();
	
	
}
