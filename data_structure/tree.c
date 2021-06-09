#include<stdio.h>
#include<stdlib.h>

struct node
{
	int key;
	struct node *left;
	struct node *right; 
};

struct node *root=NULL;

struct node *getNewNode(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->key=val;
	newnode->left=NULL;
	newnode->right=NULL;

	return newnode;
}

struct node *insert(struct node *root,int val)
{
	if(root==NULL)
		return getNewNode(val);
	if(val > root->key)
		root->right=insert(root->right,val);
	else if(val < root->key)
		root->left=insert(root->left,val);
	return root;
}

struct node *inorder(struct node *root)
{
	if(root == NULL)
	return 0;
	
	inorder(root->left);
	printf("%d \t",root->key);
	inorder(root->right);
}

struct node *preorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	printf("%d \t",root->key);
	preorder(root->left);
	preorder(root->right);
}

struct node *postorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d \t",root->key);
}

struct node *removeNode(struct node *root,int val)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->key < val)
	{
		root->right=removeNode(root->right,val);
	}
	else if(root->key >val)
	{
		root->left=removeNode(root->left,val);
	}
	else
	{
		if(root->left == NULL && root->right == NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left == NULL)
		{
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL)
		{
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		else
		{
			int rightMin = getRightMin(root->right);
			root->key=rightMin;
			root->right=removeNode(root->right,rightMin);
		}
	}
	return root;
}

int getRightMin(struct node *root)
{
	struct node *temp=root;
	while(temp->left !=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
}

int search(struct node *root,int number)
{
	if(root == NULL)
		return NULL;
	if(number == root->key)
		return root;
	if(number < root->key)
		return search(root->left,number);
	if(number > root->key)
		return search(root->right,number);
}

void smallest(struct node *root)
{
	if(root->left!=NULL)
		smallest(root->left);
	else
		printf("%d\t",root->data);
}

void largest(struct node *root)
{
	if(root->right!=NULL)
		largest(root->right);
	else
		printf("%d\t",root->data);
}



//Maximum height or Depth of a tree

int maxheight(struct node* root)
{
	int height,height1;
	if(root==NULL)
	{
		return -1;
	}
	else
	{
		height=maxheight(root->left);
		height1=maxheight(root->right);
		if(height > height1)
		{
			return(height+1);
		}
		else
		{
			return(height1+1);
		}
	}
}

//counting the No of node with exactly one child 

int count(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int res = 0;
	if ((root->left != NULL && root->right == NULL )|| 
      (root->left == NULL && root->right != NULL))
		res++;

	//if(root->left && root->right) two childs
		res++;
	// else if(root->left==NULL && root->right!=NULL)
	// {
	// 	return 1+count(root->right);
	// }
	// else if(root->left!=NULL && root->right==NULL)
	// {
	// 	return 1+count(root->left);
	// }
	// else
	// {
	// 	return res + count(root->right)+count(root->left);
	// }

	return res + count(root->right)+count(root->left);
}	

int countLeaf(struct node* root)
{
	if(!root)
		return 0;
	int res = 0;
	if(!root->left && !root->right)
		res++;
	return res + countLeaf(root->leaf) + countLeaf(root->right);
}

void printNodesOneChild(struct node* root)
{
  // Base case
  if (root == NULL)
    return;
 
  // Condition to check if the 
  // node is having only one child
  if (root->left != NULL && 
      root->right == NULL ||
      root->left == NULL &&
      root->right != NULL)
  {
    printf("%d    ", root->key);
  }
 
  // Traversing the left child
  printNodesOneChild(root -> left);
 
  // Traversing the right child
  printNodesOneChild(root -> right);
}
	
//Insertion without Recursion

struct node *insertelement(struct node *root,int val)
{
	struct node *newnode,*current,*parent;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->key=val;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		parent=NULL;
		current=root;
		while(current!=NULL)
		{
			parent=current;
			if(val > parent->key)
			{
				current=current->right;
			}
			else
			{
				current=current->left;
			}
		}
		if(val < parent->key)
		{
			parent->left=newnode;
		}
		else
		{
			parent->right=newnode;
		}
	}
	return root;		
}

int main()
{	
	int n,m,o,p;
	printf("Insert 5 elements in the Tree : \n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&n);
		root=insert(root,n);
	}
	printf("\n\nMY TREE :\n");
	inorder(root);
	printf("\n");
	
	int great=maxheight(root);
	printf("Height of the tree: %d\n",great);
	
	//printf("Node: %p\n",printNodesOneChild(root));
	
	
	int counter=count(root);
	printf("Couting the no of node with exactly one child : %d\n",counter);
	
	printf("Which element you want to Search\n");
	scanf("%d",&o);
	int result=search(root,o);
	printf("\n search....... %d \n",result);
	inorder(root);
	printf("\n");
	/*
	printf("Which element you want to Delete\n");
	scanf("%d",&m);
	removeNode(root,m);
	inorder(root);
	printf("\n");
	
	printf("Enter the element to Insert without using Recursion\n");
	scanf("%d",&p);
	insertelement(root,p);
	printf("MY TREE:\n");
	inorder(root);
	printf("\n");*/
	
	return 0;
}
