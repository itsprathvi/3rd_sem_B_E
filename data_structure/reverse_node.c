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
		printf("Enter the data for node 1 : ");
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

/* using Three Pointers */

/*void reverse()
{
	struct node *link,*prev,*cur;
	prev=NULL;
	link=head;
	cur=head;
	while(cur!=NULL)
	{
		link=link->next;
		cur->next=prev;
		prev=cur;
		cur=link;
	}	
	head=prev;
}*/


/* using two Pointers */

/*int reverse()
{
    struct node* pre,*cur;
    pre = NULL;
    cur = head;
    while(cur != NULL)
    {
        head = cur;
        cur = cur->next;
        head->next = pre;
        pre = head;
    }
}*/

/* Using Recursion */

void reverse(struct node *temp)
{
	if(temp->next==NULL)
	{
		head=temp;
		return;
	}
	struct node *rev=temp->next;
	reverse(temp->next);
	rev->next=temp;
	temp->next=NULL;
}
int main()
{
	create();
	display();
	reverse(head);
	printf("THE NODE AFTER REVERSING\n");
	display();
	
	
}
