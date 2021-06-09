#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
	int bal_factor;
}*root=NULL;

//height of the tree
int height(struct node *root)
{
	int heightl,heightr;
	if(root==NULL)
	{
		return -1;
	}
	else
	{
		heightl=height(root->left);
		heightr=height(root->right);
		if(heightl >= heightr)
		{
			return heightl+1;
		}		
		else
		{
			return heightr+1;
		}
	}
}

struct node *getnewnode(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));

	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->bal_factor = 0;
	return(newnode);
}

struct node *insert(struct node *root,int val)
{
	if(root==NULL)
	{
		return(getnewnode(val));
	}
	if(val < root->data)
	{
		root->left=insert(root->left,val);
	}
	else if(val > root->data)
	{
		root->right=insert(root->right,val);
	}
	else
	{
		return(root);
	}


	root->bal_factor=getbalance(root);
	int balance = root->bal_factor;

//LL Rotation
	if(balance > 1 && val < root->left->data)
	{
		printf("Imbalanced node %d \n Balanced factor %d \n",root->node,root->bal_factor);
		printf("Rotation of the node %d \t %d \t %d \t\n",root->node,root->left->data,root->left->left->data);
		return  rightrotate(root);
	}
//RR Rotation
	if(balance < -1 && val > root->right->data)
	{
		printf("Imbalanced node %d \n Balanced factor %d \n",root->node,root->bal_factor);
		printf("Rotation of the node %d \t %d \t %d \t\n",root->node,root->right->data,root->right->right->data);
		return  leftrotate(root);
	}
//LR Rotation
	if(balance > 1 && val < root->left->data)
	{
		printf("Imbalanced node %d \n Balanced factor %d \n",root->node,root->bal_factor);
		printf("Rotation of the node %d \t %d \t %d \t\n",root->node,root->left->data,root->left->left->data);
		root->left = leftrotate(root->left)
		return  rightrotate(root);
	}
//RL Rotation
	if(balance < -1 && val > root->right->data)
	{
		printf("Imbalanced node %d \n Balanced factor %d \n",root->node,root->bal_factor);
		printf("Rotation of the node %d \t %d \t %d \t\n",root->node,root->right->data,root->right->right->data);
		root->right = rightrotate(root->right);
		return  leftrotate(root);
	}
	return root;
}


int getbalance(struct node *root)
{
	if(root==NULL)
		return 0;
	else
		return height(root->left)-height(root->right);
}

struct node *rightrotate(struct node *root)
{
	struct node *y = root->left;
	struct node *y_r = y->right;

	y->right = root;
	root->left = y_r;

	root->bal_factor=height(root->left)-height(root->right);
	y->bal_factor=height(y->left)-height(y->right);

	return y;
}

struct node *leftrotate(struct node *root)
{
	struct node *y=root->right;
	struct node *y_r=y->left;

	y->left=root;
	root->right=y_r;

	root->bal_factor=height(root->left)-height(root->right);
	y->bal_factor=height(y->left)-height(y->right);

	return y;
}

void inorder(struct node *root)
{
	if(root==NULL)
	{
		return 0;
	}

	inorder(root->left);
	printf("%d \t",root->data);
	inorder(root->right);
}

struct Node* deleteNode(struct Node* root, int key) 
{ 
    if (root == NULL) 
        return root; 
 
    if ( key < root->key ) 
        root->left = deleteNode(root->left, key); 

    else if( key > root->key ) 
        root->right = deleteNode(root->right, key); 

    else
    { 
        
        if( (root->left == NULL) || (root->right == NULL) ) 
        { 
            struct Node *temp = root->left ? root->left : root->right; 

            if (temp == NULL) 
            { 
                temp = root; 
                root = NULL; 
            } 
            else 
             *root = *temp;  
                            
            free(temp); 
        } 
        else
        { 
            struct Node* temp = inorder_successor(root->right); 
  
            root->key = temp->key; 
  
            root->right = deleteNode(root->right, temp->key); 
        } 
    } 

    if (root == NULL) 
      return root;  

    int balance = getBalance(root); 

    if (balance > 1 && getBalance(root->left) >= 0) 
        return rightRotate(root); 

    if (balance > 1 && getBalance(root->left) < 0) 
    { 
        root->left =  leftRotate(root->left); 
        return rightRotate(root); 
    } 
     if (balance < -1 && getBalance(root->right) <= 0) 
        return leftRotate(root); 

    if (balance < -1 && getBalance(root->right) > 0) 
    { 
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    } 
  
    return root; 
} 

void inorder_successor(struct node *root)
{
	struct node *temp = root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp;
}

int main() 
{ 
int num;
root = insert(root, 30); 
root = insert(root, 20); 
root = insert(root, 10); 
root = insert(root, 40); 
root = insert(root, 50); 
root = insert(root, 25); 
printf("Inorder traversal of the constructed AVL tree\n"); 
inOrder(root); 
printf("Enter the element to delete\n");
scanf("%d", &num);
deleteNode(root, num);
printf("Inorder traversal of the AVL tree after Deletion tree is \n"); 
inOrder(root); 
return 0; 

} 