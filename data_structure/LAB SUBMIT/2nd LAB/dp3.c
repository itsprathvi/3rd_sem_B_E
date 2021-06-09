#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node* head = NULL;

int create()
{
	struct node *newnode, *temp;
	int i=1, data;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("NO SAPCE ALLOCATED");
		exit(0);
	}
	else
	{
		printf("space allocated successfully...press -1 to STOP\n");
		printf("enter the data for 0: ");
		scanf("%d", &data);
        if (data == -1)
            return 0;        
		newnode->data = data;
		newnode->next = NULL;
		temp = newnode;
        head = newnode;
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

void display(){
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
    if (pos == 0)
    {
        newnode->data = ele;
		newnode->next = head;
        head = newnode;
        printf("\nInserted %d at %d'th node SUCESSFULLY\n\n\n", ele, pos);
        return 0;
    }
    else{
        temp = head;
        i=1;
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
        printf("Press 1 to insert,2 to display and 0 to exit: ");
        scanf("%d", &arg);
        switch (arg)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\nEnter the element and position to be inserted\n");
            scanf("%d %d", &ele, &pos);
            insert(ele, pos);
            break;
        case 2:
            display();
            break;
        default:
            printf("\nPlease enter valid input\n");
            break;
        }
     }
}
