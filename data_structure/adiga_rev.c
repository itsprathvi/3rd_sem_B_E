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

int reverse()
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
    return 0;
}


int main()
{
	create();
	display();
	reverse();
	printf("Reverse node\n");
	display();
	
	
}
