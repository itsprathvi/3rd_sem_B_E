#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
}*firstnode;
void createlist(n)
{
struct node *newnode,*temp;
int num,i;
firstnode=(struct node*)malloc(sizeof(struct node));
if(firstnode==NULL)
{
printf("Memory not allocated.");
}
else
{
printf("Enter data of node 1 :");
scanf("%d",&num);
firstnode->data=num;
firstnode->next=NULL;
temp=firstnode;
for(i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Memory not allocated.");
}
else
{
printf("Enter the data for node %d:",i);
scanf("%d",&num);
newnode->data=num;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;
}
}
}
}
void display()
{
struct node *temp;
if(firstnode==NULL)
{
printf("List is empty.");
}
else
{
temp=firstnode;
int i=1;
while(temp!=NULL)
{
printf("Node %d Data=%d\n",i,temp->data);
temp=temp->next;
i++;
}
}
}
void delete()
{
struct node *ptr;
ptr=firstnode;
printf("The deleted node is %d\n",ptr->data);
firstnode=firstnode->next;
ptr->next=NULL;
free(ptr);
}
int main()
{
int n;
printf("\nTo create and display linked list:\n");
printf("Enter the number of nodes:");
scanf("%d",&n);
createlist(n);
printf("Data entered in the list:\n");
display();
delete();
display();
return 0;
}