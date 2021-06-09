#include<stdio.h>
#include<stdlib.h>

int stack[50],top=-1;
int MAX=10;

void push(int num)
{
	if(top==MAX-1)
	{
		printf("\nStack Overflow\n");
		return;
	}
	stack[++top]=num;
}

void pop()   //char
{
	
	if(top==-1)
	{
		printf("\nStack Undeflow\n");
		return 0;
	}
	else
	{
		printf("\n %d is removed\n",stack[top]);
		//char x=stack[top];
		stack[top]=0;
		top--;
	}
//	return x;
}
void display()
{
	if(top==-1)
	{
		printf("\nNo items Left\n");
		return;
	}

	printf("\nStack elements are:\n\n");
	for(int i=0;i<=top;i++)
	{
		printf("%d\t",stack[i]);
	        printf("\n");
	}
}
	
int main()
{
	int option,num;
	while(1)
	{
		printf("\nChoose the Below options\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("\nEnter the Value\n");
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
	
	
