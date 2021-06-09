#include<stdio.h>
#include<stdlib.h>
#include <math.h>

struct node{
	int data;
	struct node * next;
    	struct node * prev;
};

struct node * head= NULL;
struct node * tail= NULL;
int len = 0;

void create()
{
    	struct node *newnode;
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
            return;        
		newnode->data = data;
		newnode->next = NULL;
        	newnode->prev = NULL;
		tail = newnode;
       	head = newnode;
        	len++;
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
	        	    return;
				newnode->data = data;
				newnode->next = NULL;
                		newnode->prev = tail;
				tail->next = newnode;
                		tail = tail->next;
                		len++;
                		i++;
			}
		}
	}
}

void display()
{
    struct node *temp;
    temp = head;
    printf("Linked List: \n");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void display_reverse()
{
    struct node *temp;
    temp = tail;
    printf("Reverse Linked List: \n");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void add_beg(int n)
{
    struct node *newnode;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next=head;
    newnode->prev = NULL;
    head->prev = newnode;
    head = newnode;
    len++;
}

void add_end(int n)
{
    struct node *newnode;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->prev = tail;
    newnode->next = NULL;
    tail->next = newnode;
    tail = newnode;   
    len++;
}

void add_after()
{
    int n, ele;
    printf("Enter the element after which the node to be created:");
    scanf("%d", &ele);
    printf("Enter the element to be inserted: ");
    scanf("%d", &n);
    struct node *newnode, *temp;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->prev = NULL;
    newnode->next = NULL;
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            newnode->next = temp->next;
            newnode->prev = temp;
            if (temp->next!=NULL)
                temp->next->prev=newnode;
            else
                tail = newnode;
            temp->next = newnode;
            len++;
            return;
        }
        temp = temp->next;
    }
    printf("%d not found\n", ele);
    free(newnode);
}   

void add_before()
{
    int n, ele;
    printf("Enter the element before which the node to be created:");
    scanf("%d", &ele);
    printf("Enter the element to be inserted: ");
    scanf("%d", &n);
    struct node *newnode, *temp;
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->prev = NULL;
    newnode->next = NULL;
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            newnode->prev = temp->prev;
            newnode->next = temp;
            if (temp->prev!=NULL)
                temp->prev->next=newnode;
            else
                head=newnode;
            temp->prev = newnode;
            len++;
            return;
        }
        temp = temp->next;
    }
    printf("%d not found\n", ele);
    free(newnode);
}

void del_first()
{
    if (head == NULL || head->next==NULL)
    {
        free(head);
        head = tail = NULL;
    }
    else
    {
        struct node *temp= head;
        head=head->next;
        head->prev=NULL;
        len--;
        free(temp);
    }
}


int delete_pos(int pos)
{
	struct node* temp, *previous;
   	int i=0;
	temp = head;
	previous =temp;
	pos--;
    if (pos<0)
    {
        printf("Invalid pos!!\n");
    }
    
    if (pos == 0)
    {
		head = head->next;
        if (head == NULL)
            tail = head;        
		free(temp);
        printf("\nDELETED %d'th node SUCCESSFULLY\n\n\n", pos);
        return 0;
    }
    else{
        while (temp != NULL)
        {
            if(i == pos)
            {
		        // previous->next = temp->next;
                temp->prev->next = temp->next;
                if (temp->next != NULL)
                {
                    temp->next->prev = temp->prev;
                }
                else
                {
                    tail = temp->prev;
                }
		        free(temp);
                printf("\nDELETED %d'th node SUCESSFULLY\n\n\n", pos+1);
                return 0;
            }
	        previous = temp;
            temp = temp->next;
            i++;
        }
        printf("\nNot a valid position...\n\n\n");
    } 
}

void del_mid()
{
    int k;
    if(len%2==0)
    {
        k=len/2;
    }
    else
    {
        k=len/2+1;
    }
    delete_pos(k);
}

int main()
{
    create();
    display();
    del_mid();
    display();
    display_reverse();
}
