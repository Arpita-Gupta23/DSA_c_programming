// circular  doubly LinkedList 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
	struct Node *prev;
};
struct Node *start=NULL;
struct Node *end=NULL;
void insertAtB(int);
void insertAtE(int);
void showAll();
void showAll2();
void showAll3(int x);
void showAll4(int x);
void main()
{
    insertAtE(10);
    insertAtE(20);
    insertAtE(30);
    insertAtE(40);
    insertAtE(50);
    showAll();
    printf(".................\n");
	showAll2();
	printf(".................\n");
	showAll3(30);
	printf(".................\n");
	showAll4(30);
   
}
void insertAtB(int x)
{
    struct Node *newNode=malloc(sizeof(struct Node));
	newNode->data=x;
	if(start==NULL)
	{
	newNode->prev=newNode->next=start=end=newNode;	
	}
	else{
	newNode->next=start;
	newNode->prev=end;
	start->prev=newNode;
    end->next=newNode;
	start=newNode;
	}
}
void insertAtE(int x)
{
    if(start==NULL)
    {
        insertAtB(x);
        return;
    }
	 struct Node *newNode=malloc(sizeof(struct Node));
	 newNode->data=x;
	newNode->next=start;
	newNode->prev=end;
	start->prev=newNode;
	end->next=newNode;
	end=newNode;
}
void showAll()
{
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
   struct Node *temp=start;
   
   do{
	   printf("%d\n",temp->data);
	   temp=temp->next;
   }
    while(temp!=start);
    }


void showAll2()
{
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
    struct Node *temp=end;
   do
   {
        printf("%d\n",temp->data);
       temp=temp->prev;
  }
   while(temp!=end);
}
void showAll3(int x)
{
	if(start==NULL)
	{
	    printf("List is empty\n");
		return;	
	}
	struct Node *temp=start;
	while(temp->data!=x)
	{
		temp=temp->next;
		if(temp==start)
		{
		printf("Data not found\n");
		return;
		}
	}
	struct Node *temp2=temp;
	do{
		printf("%d\n",temp->data);
       temp=temp->next;
	}
	while(temp!=temp2);
}

void showAll4(int x)
{
	if(start==NULL)
	{
	    printf("List is empty\n");
		return;	
	}
	struct Node *temp=start;
	while(temp->data!=x)
	{
		temp=temp->next;
		if(temp==start)
		{
		printf("Data not found\n");
		return;
		}
	}
	struct Node *temp2=temp;
	do{
		printf("%d\n",temp->data);
       temp=temp->prev;
	}
	while(temp!=temp2);
}