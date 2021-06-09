#include<stdio.h>
int front=-1,rear=-1,size=100,a[100];
void enqueue(int x)
{
	if(rear==size)
	{
		printf("Queue is Full\n");
		return;
	}
	rear=0;front=0;
	else
	{
		a[rear]=x;
		rear++;
	}
}
void dequeue()
{
	if(rear==front)
	{
		printf("Queue is empty\n");
		return;
	}
	else
	{
		printf("Element %d is removed\n",a[front]);
		front++;
	}
}

void display()
{
	if(rear==front)
	{
		printf("Queue is Empty\n");
		return;
	}
	for(int i=front;i<rear;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n");
}

int main()
{
	int x,arg;
	while(1)
	{
		printf("1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n");
		scanf("%d",&arg);
		switch(arg)
		{
			case 1:printf("Enter the value to Enqueue= ");
				   scanf("%d",&x);
				   enqueue(x);
				   break;
			case 2:dequeue();
				   break;
			case 3:display();
				   break;	   
			case 4:exit(0);
				   break;
			default:printf("Enter the Valid input\n");
				   return;
		}
	}
}
