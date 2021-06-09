#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0,size=100,a[100];
void enqueue(int x)
{
    if(rear==size)
    {
        printf("Queue is full\n");
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
    if(front==rear)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("%d element is Removed\n",a[front]);
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
    else
    {
        printf("\nQueue elements\n");
        for(int i=front;i<rear;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
    }  
}

int main()
{
    int n,arg;
    while(1)
    {
        printf("1.ENQUEUE\t2.DEQUEUE\t3.DISPLAY\t4.EXIT\n");
        scanf("%d",&arg);
        switch(arg)
        {
            case 1: printf("Enter the element to enqueue:");
                    scanf("%d",&n);
                    enqueue(n);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:printf("Enter valid Number\n");
                    return 0;
        }
    }
}
