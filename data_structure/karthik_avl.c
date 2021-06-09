#include<stdio.h>
#include<stdlib.h>
struct anode
  {
    struct anode *left;
    int info;
    int balfact;
    struct anode *right;
  };
  
int big(int a,int b)
 {
  if(a>b)
    return a;
  else
    return b;
 }
int height(struct anode *root)
 {
  if(root == NULL) return -1;
  return (1 + big(height(root->left), height(root->right)));
 }
struct anode *leftrotate(struct anode *x)
 {
  struct anode *y, *z;
  y = x->right;
  z = y->left;
  y->left = x;
  x->right = z;
  x->balfact = height(x->left)-height(x->right);
  y->balfact = height(y->left)-height(y->right);
  return y;
 }
struct anode *rightrotate(struct anode *x)
 {
  struct anode *y, *z;
  y = x->left;
  z = y->right;
  y->right = x;
  x->left = z;
  x->balfact = height(x->left)-height(x->right);
  y->balfact = height(y->left)-height(y->right);
  return y;
 }
struct anode *insert(struct anode *root, int item)
  {
   struct anode *temp;
   int balance;
   if(root == NULL)
    {
     temp = (struct anode *)malloc(sizeof(struct anode));
     temp->info = item;
     temp->balfact = 0;
     temp->left = NULL;
     temp->right = NULL;
     return temp;
    }
   if(item < root->info)
      root->left = insert(root->left, item);
   else
      if(item > root->info)
	root->right = insert(root->right, item);
   else
      return root;
   root->balfact=height(root->left)-height(root->right);
   balance = root->balfact;
   if((balance > 1) && (item < root->left->info))
      return rightrotate(root);
   if((balance < -1) && (item > root->right->info))
      return leftrotate(root);
   if((balance > 1) && (item > root->left->info))
      {
	root->left = leftrotate(root->left);
	return rightrotate(root);
      }
   if((balance < -1) && (item < root->right->info))
      {
       root->right = rightrotate(root->right);
       return leftrotate(root);
      }
   return root;
 }
void inorder(struct anode *root)
{
  if(root != NULL)
   {
    inorder(root->left);
    printf("%d[%d]        ",root->info, root->balfact);
    inorder(root->right);
   }
}
struct anode *inorder_successor(struct anode *root)
   {
   	 struct anode *p = root;
   	while(p->left != NULL)
      {
        p = p->left;
      }   
     return p;    
   } 
struct anode *deleteavl(struct anode *root, int item)
{
    if(root==NULL)
    {
	printf("Data not found\n");
	return root;
    }
    if(root->info != item)
        {
            if(root->info > item)
                root->left = deleteavl(root->left, item);
            else if(root->info <= item)
                root->right = deleteavl(root->right, item);
            root->balfact = height(root->left) - height(root->right);
            if(root->balfact > 1)
            {
                if(root->left->balfact >= 0)
                    root = rightrotate(root);
                else
                {
                    root->left = leftrotate(root->left);
                    root = rightrotate(root);
                }
            }
            else if(root->balfact < -1)
            {
            if(root->right->balfact > 0)
            {
                root->right = rightrotate(root->right);
                root = leftrotate(root);
            }
            else
                root = leftrotate(root);
            }
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
               return(root->right);
            }
            else if(root->right == NULL)
            {
                return(root->left);
            }
            else
            {
                struct anode *temp;
                temp = inorder_successor(root->right);
                root->info = temp->info;
                root->right = deleteavl(root->right, temp->info);
            }
        }
    return root;
}
int main()
{
  int num;
  struct anode *root = NULL;
  int key,x=0;
    do
    {
        printf("enter 1 to insert\nenter 2 to display(inorder)\nenter 3 to delete\nenter 0 to exit : ");
        scanf("%d",&x);
        switch(x)
        {
            case 1 : printf("enter data of node to be inserted : ");
                     scanf("%d",&key);
                     root=insert(root,key);
                     break;
            case 2 : printf("inorder--\n");
                     inorder(root);
                     break;
            case 3 : if(root==NULL)
                     {
                         printf("no elements to delete\n");
                     }
                     else
                     {
                        printf("enter element to be deleted : ");
                        scanf("%d",&key);
                        root=deleteavl(root,key);
                     }
            case 0 : break;
            default : printf("invalid\n");
                      break;
        }
    } while (x);
    return 0;
}