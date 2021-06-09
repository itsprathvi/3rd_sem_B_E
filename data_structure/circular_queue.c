#include<stdio.h>

int front=-1,rear=-1,size=5,a[100];

void enqueue(int x)
{
	if((rear==size-1 && front==0) || rear==front-1 )
	{
		printf("Queue is Full\n");
		return;
	}
	if(rear==-1)
	{
		rear=front=0;
		a[rear]=x;
	//	rear++;
	}
	else
	{
		rear=(rear+1)%size;
		a[rear]=x;
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
		front=(front+1)%size;
	}
}

void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is Empty\n");
		return;
	}
	for(int i=front-1;i!=rear;i=(i+1)%size)
	{
		printf("%d \t",a[i+1]);
	}
	printf("\n");
}

int main()
{
	int x;
	for(int i=0;i<5;i++)
	{
		printf("Enter the value to Enqueue= ");
		scanf("%d",&x);
		enqueue(x);
	}
	enqueue(-1);
	printf("\nThe Elements Are:\n");
	display();
	for(int i=0;i<3;i++)
	{
		dequeue();
	}

	for(int i=0;i<3;i++)
	{
		printf("Enter the value to Enqueue= ");
		scanf("%d",&x);
		enqueue(x);
	}
	enqueue(-1);
	display();
	dequeue();
	dequeue();
	display();	
}
