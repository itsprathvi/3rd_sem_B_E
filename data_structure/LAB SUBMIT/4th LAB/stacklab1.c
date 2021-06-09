#include<stdio.h>
#include<stdlib.h>
int stack[100];
int MAX=10;
int top=-1;

void push(int num)
{
	if(top==MAX-1)
	{
		printf("Stack Overflow\n");
	}
	printf("ELEMENT PUSHED SUCCESSFULLY\n");
	top++;
	stack[top]=num;
}

void pop()
{
	if(top==-1)
	{
		printf("Stack is Underflow\n");
		return;
	}
	else
	{
		printf("ELEMENT POPED SUCCESSFULLY %d\n",stack[top]);
		stack[top]=0;
		top--;
	}
}

void display()
{
	if(top==-1)
	{
		printf("No elements in stack\n");
	}
	else
	{
		printf("\nTHE ELEMENTS ARE:\n");
		for(int i=0;i<=top;i++)
		{
			printf("%d\t",stack[i]);
		}
	}
}
			

int main()
{
	int opt,num;
	while(1)
	{
		printf("\nChoose the below Options\n");
		printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\t\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("\nEnter the Element to Push- ");
				scanf("%d",&num);
				push(num);
				break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			default :printf("\nEnter the valid number\n");
			
			return 0; 
		}
	}
}
	
