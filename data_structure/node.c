#include <stdio.h>
#include <stdlib.h>

struct node 
{ 
int data; 
struct node *link; 
}; 
int main()
{
struct node *n1,*n2,*temp;

	n1=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT \n");
	scanf("%d",&n1->data);
	n1->link =NULL;

	n2=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ELEMENT \n");
	scanf("%d",&n2->data);
	n2->link =NULL;
	n1->link = n2;
	temp = n1;
	printf("THE ELEMENTS\n");
	while(temp!=NULL)
	{
		printf(" %d \n",temp->data);
		temp=temp->link;
	}
	return 0;

}
