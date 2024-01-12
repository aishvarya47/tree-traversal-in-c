//tree traversal by aishu//
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *left,*right;
} node;
node *newnode(int data)
{
	node *temp = (node*)  malloc(sizeof(node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(node*root){  
  if(root!=NULL)
  {
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
  }
}
void preorder(node*root){
  if(root!=NULL) 
  { 
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
  }
}
void postorder(node*root)
{
	if(root!=NULL)
	{	
	  postorder(root->left);
	  postorder(root->right);
	  printf("%d",root->data);
    }
}
int main()
{
	node *root = newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(5);
	root->right->right=newnode(6);
	printf("INORDER :\n");
	inorder(root);
	printf("\n");
	printf("PREORDER:\n");
	preorder(root);
	printf("\n");
	printf("POSTORDER:\n");
	postorder(root);
	printf("\n");
	return 0;
}

