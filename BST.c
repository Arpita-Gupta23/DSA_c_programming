//Binary search tree
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
	struct Node *right;
};
struct Node *root=NULL;
struct Node* insert(struct Node*,int);
void showAll(struct Node*);
void showAll2(struct Node*);
void showAll3(struct Node*);
void main()
{
    root=insert(root,10);
    insert(root,5);
	insert(root,15);
	insert(root,2);
	insert(root,7);
    showAll(root);
    printf(".................\n");
	showAll2(root);
	printf(".................\n");
	showAll3(root);
	printf(".................\n");
}
struct Node* insert(struct Node* temp,int x)
{
if(temp==NULL)
{
    temp=malloc(sizeof(struct Node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	}
	else if(x<temp->data)
	{
	temp->left=insert(temp->left,x);
	}
	else{
	temp->right=insert(temp->right,x);
	}
	return temp;
}

void showAll(struct Node *temp)
{
	if(temp==NULL)return;
	showAll(temp->left);
	 printf("%d\n",temp->data);
	 showAll(temp->right);
   }
   
   void showAll2(struct Node* temp)
{
	if(temp==NULL)return;
	printf("%d\n",temp->data);
	showAll2(temp->left);
	showAll2(temp->right);
   }
   
      void showAll3(struct Node* temp)
{
	if(temp==NULL)return;
	showAll2(temp->left);
	showAll2(temp->right);
	printf("%d\n",temp->data);
   }
   
   


