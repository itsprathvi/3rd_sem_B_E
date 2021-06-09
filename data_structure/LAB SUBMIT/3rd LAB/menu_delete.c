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
				printf("NO SPACE ALLOCATED");
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

int delete(int pos)
{
	struct node* temp, *previous;
    int i=0;
	temp = head;
	previous =temp;
	pos--;
    if (pos == 0)
    {
		head = head->next;
		free(temp);
        printf("\nDELETED %d'th node SUCCESSFULLY\n\n\n", pos);
        return 0;
    }
    else{
		
        while (temp != NULL)
        {
            if(i == pos)
            {
		        previous->next = temp->next;
				free(temp);
                printf("\nDELETED %d'th node SUCESSFULLY\n\n\n", pos);
                return 0;
            }
			previous = temp;
            temp = temp->next;
            i++;
        }
        printf("\nNot a valid position...\n\n\n");
    } 
}

int delete_beg()
{
    struct node* temp;
    temp = head;
    head = head->next;
    free(temp);
    printf("\nDeleted 1st node\n\n\n");
    return 0;
}

int delete_end()
{
    struct node * temp, *pre;
    temp = head;
    pre = temp;		
    while(temp->next != NULL)
    {
        pre= temp;
        temp = temp->next;
    }
    pre->next = NULL;
    free(temp);
    printf("\nDeleted Last Node\n\n\n");
    return 0;
}

int delete_val(int val)
{
	struct node* temp, *previous;
	temp = head;
	previous = temp;
    if (temp->data == val)
    {
		head = head->next;
		free(temp);
        printf("\nDELETED node containing %d SUCCESSFULLY\n\n\n", val);
        return 0;
    }
    else
    {	
        while (temp != NULL)
        {
            if(temp->data == val)
            {
		        previous->next = temp->next;
				free(temp);
                printf("\nDELETED node containing %d SUCCESSFULLY\n\n\n", val);
                return 0;
            }
			previous = temp;
            temp = temp->next;
        }
        printf("\n Value not found...\n\n\n");
    } 
}

int delete_after()
{
	struct node *ptr, *preptr;
	int n, val;
	printf("\nEnter the value after which the node to be deleted: ");
	scanf("%d", &val);
	ptr = head;
	preptr = ptr;
	if(preptr->data == val)
	{
		if(preptr->next == NULL)
			{
			    printf("\nNo Element after %d\n\n\n", val);
			    return 0;
			}
			ptr = ptr->next;
			preptr->next = preptr->next->next;
			free(ptr);
		printf("\nNode after %d is deleted\n\n\n", val);
	}
	else
	{
		while(preptr->data!=val)
		{
			preptr = ptr;
			if(preptr == NULL)
			{
				printf("Value not found...\n");
				return 1;
			}
			ptr = ptr->next;
		}
		if(preptr->next == NULL)
		{
		    printf("\nNo Element after %d\n\n\n", val);
		    return 0;
		}
		preptr->next = preptr->next->next;
		free(ptr);
		printf("\nNode after %d is deleted\n\n\n", val);
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
		printf("\n* * * * L I S T * * * *\n\n[HEAD]==>");
		int i=0;
		temp = head;		
		while(temp != NULL)
		{
			printf(" %d ==>",temp->data);
			temp = temp->next;
			i++;
		}
		printf(" [NULL]\n");
		printf("\n* * * * * * * * * * * *\n");
		printf("\n");
	}
}

int main()
{
    int arg, ele, pos;
    struct node* temp, *next;
    create();
    display();
    while (1)
    {
        printf("Press 1 to delete at begining\n,2 to delete at the end\n 3 to delete after the given element\n 4 to delete a node containing a value\n 5 to delete at a given position\n 6 to display,\n 0 to exit: ");
        scanf("%d", &arg);
        switch (arg)
        {
        case 0:
            temp = head;		
			while(temp != NULL)
			{

				next = temp->next;
				free(temp);
				temp = next;
			}
            exit(0);
        case 1:
            delete_beg();
            break;
        case 2:
            delete_end();
            break;
        case 3:
            delete_after();
            break;
        case 4:
            printf("\nEnter the value of the node to be deleted\n");
            scanf("%d",&ele);
            delete_val(ele);
            break;
        case 5: 
            printf("\nEnter the position to be deleted\n");
            scanf("%d",&pos);
            delete(pos);
            break;
        case 6:
            display();
            break;

        default:
            printf("Enter valid input");
            break;
        }
    }
    
}

