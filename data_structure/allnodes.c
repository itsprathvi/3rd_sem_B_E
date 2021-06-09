#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

struct node* head = NULL;

int create1()
{
	struct node *newnode, *temp;
	int i=1, data;
	newnode = (struct node *)malloc(sizeof(struct node));
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


int create2()
{
	struct node *newnode;
	int i=1, data;
	newnode = (struct node *)malloc(sizeof(struct node));
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
		newnode->data = data;
		newnode->next = NULL;
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
				newnode->next = head;
				head = newnode;
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

int insert_after()
{
	struct node *newnode, *ptr, *preptr;
	int n, val;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data for new node: ");
	scanf("%d", &newnode->data);
	printf("\nEnter the vlaue after which the node to be inserted: ");
	scanf("%d", &val);
	ptr = head;
	preptr = ptr;
	if(preptr->data == val)
	{
		newnode->next = head->next;
		head->next = newnode;
	}
	else
	{
		while(preptr->data!=val)
		{
			preptr = ptr;
			ptr = ptr->next;
			if(ptr == NULL)
			{
				printf("Value not found...\n");
				return 1;
			}
		}
			preptr->next = newnode;
			newnode->next = ptr;
	}
}

int insert_before()
{
	struct node *newnode, *ptr, *preptr;
	int n, val;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data for new node: ");
	scanf("%d", &newnode->data);
	printf("\nEnter the vlaue before which the node to be inserted: ");
	scanf("%d", &val);
	ptr = head;
	preptr = ptr;
	if(preptr->data == val)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		while(ptr->data!=val)
		{
			preptr = ptr;
			ptr = ptr->next;
			if(ptr == NULL)
			{
				printf("Value not found...\n");
				return 1;
			}
		}
			preptr->next = newnode;
			newnode->next = ptr;
	}
}

int delete(int pos)
{
	struct node* temp, *previous;
    int i=0;
	temp = head;
	previous =temp;
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

int main(){
    int arg, ele, pos, ins;
	struct node* temp, *next;
    printf("Press 1 to add the elements end by end / 0 to add elements at the beginning\n");
    scanf("%d",&arg);
    if(arg == 0)
        create2();
    else
        create1(); 
     display();
     while (1)
     {
		 printf("# # # # # # # # # # # #\n");
        printf("Press 1 to insert,2 to display,3 to delete a node and 0 to exit: ");
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
            break;
        case 1:
			printf("\nPress 1 to insert at specific loc:\nPress 2 to insert after a specific value:\nPress 3 to insert before a specific value:\n");
			scanf("%d", &ins);
			if(ins==1)
			{
				printf("\nEnter the element and position to be inserted\n");
				scanf("%d %d", &ele, &pos);
				insert(ele, pos);
			}
			else if(ins == 2)
				insert_after();
			else
				insert_before();
            break;
        case 2:
            display();
            break;
		case 3:
			printf("\nEnter the position of node to be deleted: ");
			scanf("%d", &pos);
			delete(pos);
        default:
            printf("\nPlease enter valid input\n");
            break;
        }
     }
}
