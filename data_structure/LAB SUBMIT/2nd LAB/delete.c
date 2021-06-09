#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node* head = NULL;

void create(int n)
{
	struct node *newnode, *temp;
	int i, data;
	newnode = (struct node *)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("NO SAPCE ALLOCATED");
		exit(0);
	}
	else
	{
		printf("space allocated successfully\n");
		printf("enter the data for 0: ");
		scanf("%d", &data);
		newnode->data = data;
		newnode->next = NULL;
		temp = newnode;
               head = newnode;
		for(i=1;i<n;i++)
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
				newnode->data = data;
				newnode->next = NULL;
				temp->next = newnode;
                               temp = temp->next;
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

int delete(){
    if(head == NULL)
        printf("\nList is empty\n");
    else{
        head = head->next;
        printf("\nDeleted the first node\n");
    }
}

int insert(int data)
{
	struct node *newnode, *temp;
    temp = head;	
    if(temp == NULL)	
    {
        newnode =  (struct node *)malloc(sizeof(struct node));
	    newnode->data = data;
	    newnode->next = NULL;   
        head= newnode;
    }
    while(temp->next != NULL)
        temp = temp->next;
	newnode =  (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
    temp->next = newnode;
	printf("Inserted %d Successfully at the end\n", data);
	return 0;	
}

int main(){
    int n, pos, arg, itm;
    printf("Enter the no of items: ");
    scanf("%d", &n);
    create(n);
    display();
    while(1)
    {
        printf("\nEnter 1 to add an element to node:\nEnter 2 to delete an element:\nEnter 3 to display the list:\nEnter 0 to quit:\n");
        scanf("%d", &arg);
        switch (arg)
        {
        case 1:
            printf("\nEnter the element to be added: ");
            scanf("%d", &itm);
            insert(itm);
            break;
        case 2:
            delete();
            break;
        case 3:
            printf("\nDISPLAYING...\n");
            display();
            break;
        case 0:
            exit(0);
        default:
            printf("\nEnter the valid input!!\n");
            break;
        }
    }
}
