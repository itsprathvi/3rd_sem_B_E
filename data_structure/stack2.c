#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node*next;
}*top=NULL;

void push()
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value \n");
	scanf("%d",&new->data);
	
	if(top==NULL)
	{
		new->next=NULL;
		top=new;
	}
	else
	{
		new->next=top;
		top=new;
	}
}

void pop()
{
	if(top==NULL)
	{
		printf("Stack is Underflow\n");
	}
	else
	{
		struct node *tmp;
		tmp=top;
		top=top->next;
		printf("Element %d is popped\n",tmp->data);
		free(tmp);
	}
}

void display()
{
	struct node *tmp;
	printf("\n");
	if(top==NULL)
	{
		printf("Space is empty\n");
	}
	else
	{
		tmp=top;
		int i=1;
		while(tmp!=NULL)
		{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
			i++;
		}
		printf("\n");
	}
}

	

int main()
{
	display();
	push();
	push();
	push();
	display();
	pop();
	pop();
	pop();
	pop();
}
