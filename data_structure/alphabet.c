#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char data[5];
	struct node *left;
	struct node *right;
};

struct node *create_node(char val[])
{
	struct node *newnode=malloc(sizeof(struct node));
	strcpy(newnode->data,val);
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

struct node *insert(struct node*start,char val[])
{
	if(start==NULL)
	return create_node(val);
	if(strcmp(start->data,val)>0)
	{
		start->left=insert(start->left,val);
	}
	else
	{
		start->right=insert(start->right,val);
	}
	return start;
}

void inorder(struct node *start)
{
	if(start==NULL)
	return;
	inorder(start->left);
	printf("%s",start->data);
	inorder(start->right);
}

int main()
{
	char n[5];
	struct node*root=malloc(sizeof(struct node));
	root=NULL;
	printf("enter the values to be inserted in the binary tree (press end to stop): ");
	while(1)
	{
		gets(n);
		if(strcmp(n,"end")==0)
		break;
		root=insert(root,n);
	}
	inorder(root);
	return 0;
}