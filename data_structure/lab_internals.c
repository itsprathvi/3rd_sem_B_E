#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0,size=100,a[100];

void enqueue(int x)
{
	if(rear == size)
	{
		printf("Queue is Full\n");
		return;
	}
	else
	{
		a[rear]=x;
		rear++;
	}
}

void dequeue()
{
	if(front == rear)
	{
		printf("Queue is Empty\n");
		return;
	}
	else
	{
		printf("Element %d is removed from Queue\n",a[front]);
		front++;
	}
}
 
void delete(int x)
{
	for(int i=front;i<rear;i++)
	{
		if(a[i]==x)
		{
			printf("Deleted the element %d ",x);
			for(int j=i; j<rear; j++)
                a[i] = a[i + 1];
                rear--;
		}
	}
	printf("\n");
}


void display()
{
	if(front == rear)
	{
		printf("Queue is Empty\n");
		return;
	}
	for(int i=front;i<rear;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}


int main()
{
	int x,y,arg;
	while(1)
	{
		printf("1.Enqueue \t2.Dequeue\t3.Display\t4.Delete\t5.Exit\n");
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
			case 4:printf("Enter the Element to Delete : ");
					scanf("%d",&y);
					delete(y);
				   	break;
			default:printf("Enter the Valid input\n");
				   return;
		}
	}
}
