#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front= NULL;
struct node *rear= NULL;

void enqueue(int val)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(front==NULL || rear==NULL)
    {
        rear=front=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    struct node *temp;
    if(front==NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    else
    {
        printf("Deleted %d\n",front->data);
        temp=front;
        front=front->next;

        if(front==NULL)
        {
            rear=NULL;
        }
        free(temp);
    }
}

int peak()
{
    return (front->data);
}

void display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("Out of stock\n");
        return;
	}
	else
	{
		temp=front;
		int i=1;
		while(temp!=NULL)
		{
			printf("The node %d contains the data %d\n",i,temp->data);
			temp=temp->next;
			i++;
		}
	}
}


int main()
{
	int arg,n;
	while(1)
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Front element\n5.Exit\n");
		scanf("%d",&arg);
        switch(arg)
        {
            case 1 :printf("Enter the element to enqueue = ");
                    scanf("%d",&n);
			        enqueue(n);
                    break;
            case 2 :dequeue();break;
            case 3 :display();break;
            case 4 :printf("Front element : %d \n",peak());break;
            case 5 :exit(0);break;
            default :printf("Enter Valid Number\n");
        }
    }
}
	
