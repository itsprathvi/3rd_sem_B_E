#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int front = -1, rear = -1;
// int MAX=10;

struct node{
    int data;
    int priority;
} q[MAX];

void push(struct node item)
{
    if(rear == -1)
    {
        q[++rear].priority = item.priority;
        q[rear].data = item.data;
        front++;
        return;
    }
    else if(rear == MAX-1)
    {
        printf("\n Overflow!!");
        return;
    }

    int i = rear;
    while(i >= 0 && item.priority >= q[i].priority)
    {
        q[i + 1] = q[i];
        i--;
    }
    q[i + 1].priority = item.priority;
    q[i + 1].data = item.data;
    rear++;
}


void pop()
{
	
	if(rear==-1)
	{
		printf("\nStack Undeflow\n");
		return;
	}
	else
	{
		printf("\n %d is removed\n",q[front].data);
		front++;
	}
}
void display()
{
	if(rear==-1)
	{
		printf("\nEmpty\n");
		return;
	}

	printf("\nStack elements are:\n\n");
	for(int i=front;i<=rear;i++)
	{
		printf("%d\t",q[i].data);
	        printf("\n");
	}
}
	
int main()
{
	int option;
    struct node item1, item2, item3;
    item1.data = 1;
    item1.priority = 5;
    item2.data = 2;
    item2.priority = 2;
    item3.data = 3;
    item3.priority = 10;

	push(item1);
    push(item2);
    push(item3);

				
	pop();
	pop();
	display();		
			
	return 0;
}
//Hippo Prathvi!!!!!