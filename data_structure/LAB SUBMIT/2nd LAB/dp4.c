#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*head;


int create()
{
	struct node *newnode, *temp;
	int i=1, data;
	head = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("NO SPACE ALLOCATED");
		exit(0);
	}
	else
	{
		printf("space allocated successfully...press -1 to STOP\n");
		printf("enter the data for 0: ");
		scanf("%d", &data);
        if (data == -1)
            return 0;        
		head->data = data;
		head->next = NULL;
		temp = head;
		while (1)
		{
			newnode =  (struct node *)malloc(sizeof(struct node));
			if(newnode == NULL)
			{
				printf("NO SAPCE ALLOCATED");
				exit(0);
			}
			else
			{
				printf("enter the data for %d: ",i);
				scanf("%d", &data);
                if(data == -1)
                    break;
				newnode->data = data;
				newnode->next = NULL;
				temp->next = newnode;
                temp = temp->next;
        		i++;
			}
		}
	}
}

void display()
{
	struct node* temp;
	if(head==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{ 
		printf("\n");
		int i=0;
		temp = head;		
		while(temp != NULL)
		{
			printf("Node %d data = %d\n",i,temp->data);
			temp = temp->next;
			i++;
		}
		printf("\n");
	}
}

int insert(int ele, int pos)
{
    struct node* temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int i=1;
    if (pos == i)
    {
        newnode->data = ele;
	newnode->next = head;
        head = newnode;
        printf("\nInserted %d at %d'th node SUCESSFULLY\n\n\n", ele, pos);
        return 0;
    }
    else
    {
        temp = head;
        i=2;
        while (temp != NULL)
        {
            if(i == pos)
            {
                newnode->data = ele;
	         newnode->next = temp->next;
                temp->next = newnode;
                printf("\nInserted %d at %d'th node SUCESSFULLY\n\n\n", ele, pos);
                return 0;
            }
            temp = temp->next;
            i++;
        }
        printf("\nNot a valid position...\n\n\n");
    }
    
}

int main(){
             int arg, ele, pos;
	     create(); 
	     display();
	     while (1)
		    {
			printf("Enter 1 to insert ,2 to display and 0 to exit\n");
			scanf("%d",&arg);
			if(arg==1)
			{
				printf("Enter the element and position to insert\n");
				scanf("%d %d",&ele,&pos);
				insert(ele,pos);
			}
			else if(arg==2)
			{
				display();
			}
			else if(arg==0)
			{
				exit(0);
			}
			else
			{
				printf("Enter the correct value\n");
			}		    	
				
		    }
}

