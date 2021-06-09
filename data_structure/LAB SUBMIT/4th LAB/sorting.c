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
		printf("Space is allocated successfully\nEnter the element in ascending Order,Enter -1 to stop\n");
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

void insert(int ele)
{
	struct node *new,*temp,*prev;
	new=(struct node*)malloc(sizeof(struct node));
	temp=head;
	prev=temp;
	if(head==NULL || ele<=temp->data)
	{
		new->data=ele;
		new->next=head;
		head=new;
		printf("inserted %d element Successfully\n",ele);
	}
	else
	{
		prev=temp;
		temp=temp->next;
		while(temp!=NULL)
		{
			if(ele > prev->data && ele<=temp->data)
			{
				new->data=ele;
				new->next=temp;
				prev->next=new;
				printf("Inserted %d element Succesfully\n\n",ele);
				return;
			}
			prev=temp;
			temp=temp->next;
		}
		new->data=ele;
		new->next=NULL;
		prev->next=new;
		printf("Inserted %d element successfully\n",ele);
	}

}

int main()
{
	create();
	display();
	int opt,ele;
	while(1)
	{
		printf("\nChoose the Below Options\n");
		printf("1.Insert\t2.Display\n3.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("Enter the element to insert-\n");
				scanf("%d",&ele);
				insert(ele);
				break;
			case 2:display();break;
			case 3:exit(0);
			default:printf("Enter valid number\n");break;
			return 0;
		}
	}
}














