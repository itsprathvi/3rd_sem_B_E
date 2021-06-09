#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	struct node *right;
	int data;
}*root=NULL;

//Insertion with getnode function
struct node *getnewnode(int val)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

//Insertion 
struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	{
		return getnewnode(val);
	}
	else if(val > root->data)
	{
		root->right=insert(root->right,val);
	}
	else if(val < root->data)
	{
		root->left=insert(root->left,val);
	}
	return root;
}

//In order Traversal
struct node *inorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	inorder(root->left);
	printf("%d \t",root->data);
	inorder(root->right);
}

//Pre order Traversal
struct node *preorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	printf("%d \t",root->data);
	inorder(root->left);
	inorder(root->right);
}

//Post order Traversal
struct node *postorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	inorder(root->left);
	inorder(root->right);
	printf("%d \t",root->data);
}

//number of leaves count
int getleafcount(struct node *root)
{
	if(root==NULL)
		return 0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	else
		return getleafcount(root->left)+getleafcount(root->right);
}

//counting the No of node with exactly one child
int getparentonechild(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right!=NULL)
	{
		return 1+getparentonechild(root->right);
	}
	if(root->right==NULL && root->left!=NULL)
	{
		return 1+getparentonechild(root->left);
	}
	else
	{
		return getparentonechild(root->left)+getparentonechild(root->right);
	}
}

//Number of the parent count
int countparent(struct node*root, int n)
{
    if (root == NULL)
        return n;    
    if (root->left == NULL && root->right == NULL)
        return n;
    else
    {
        n = n+1;
        n = countparent(root->left, n);
        n = countparent(root->right, n);
        return n;
    }   
}

//Finding Maximum height or depth
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
	}
	if(height > height1)
	{
		return(height+1);
	}
	else
	{
		return(height1+1);
	}
}

//Finding Minimum Value
int minvalue(struct node *root)
{
	struct node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->data;
}

//Finding Maximum value
int maxvalue(struct node *root)
{
	struct node *temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	return temp->data;
}

//Searching
void search(struct node *root,int num)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(num == root->data)
	{
		printf("Address of the Searched element  : %p\n",root);
	}
	if(num < root->data)
	{
		return search(root->left,num);
	}
	if(num > root->data)
	{
		return search(root->right,num);
	}
}

//Deletion of Particular node
struct node *removeNode(struct node *root,int val)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->data < val)
	{
		root->right=removeNode(root->right,val);
	}
	else if(root->data > val)
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
			root->data=rightMin;
			root->right=removeNode(root->right,rightMin);
		}
	}
	return root;
}

//For Deleting getRightMin function
int getRightMin(struct node *root)
{
	struct node *temp=root;
	while(temp->left !=NULL)
	{
		temp=temp->left;
	}
	return temp->data;
}

//Main function
int main()
{
	int n,ele,num,del;
	printf("Enter the number of elements to insert tree : ");
	scanf("%d",&n);
	printf("Enter the %d elements : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ele);
		root=insert(root,ele);
	}
	printf("The TREE is in Inorder : ");
	inorder(root);
	printf("\n");

	printf("The TREE is in preorder : ");
	preorder(root);
	printf("\n");

	printf("The TREE is in postorder : ");
	postorder(root);
	printf("\n");

	printf("Leaf count : %d\n",getleafcount(root));
	printf("Parent count : %d\n",countparent(root,0));
	printf("Height or Depth of tree : %d\n",maxheight(root));
	printf("Parent with only one child : %d\n",getparentonechild(root));
	printf("Minimum Value in the tree : %d\n",minvalue(root));
	printf("Maximum Value in the tree : %d\n",maxvalue(root));

	printf("Which element you want to Search : \n");
	scanf("%d",&num);
	search(root,num);

	printf("Which element you want to Delete\n");
	scanf("%d",&del);
	removeNode(root,del);
	inorder(root);
	printf("\n");
	
	return 0;
}