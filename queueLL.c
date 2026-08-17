// Queue using LinkedList 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void enqueue(int);
int dequeue();
int peek();
void showAll();
bool isEmpty();
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    showAll();
    printf(".................\n");
	printf("peek=>%d\n",peek());
	printf(".................\n");
	dequeue();
	showAll();
	printf(".................\n");
	printf("peek=>%d\n",peek());
	printf(".................\n");
   
}
void enqueue(int x)
{
  
	 struct Node *newNode=malloc(sizeof(struct Node));
	  if(newNode==NULL)
	{
      printf("Queue is empty");
       return;
    }
	 newNode->data=x;
	newNode->next=NULL;
	if(isEmpty())
    {
        front=newNode;
        rear=newNode;
        return;
    }
	rear->next=newNode;	
	rear=newNode;
}

int dequeue()
{
    int x;
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    struct Node *temp1 = front;
    front = front->next;
    if(front == NULL)
    {
        rear = NULL;
    }
    x = temp1->data;
    free(temp1);
    return x;
}

int peek()
{
	if(isEmpty())
    {
        printf("Queue is empty\n");
        return -1;
    }
return front->data;
}
bool isEmpty()
{
if(front==NULL)return true;
return false;
}
void showAll()
{
	if(isEmpty())
	{
		printf("queue is empty\n");
		return;
	}
   struct Node *temp=front;
   
    while(temp!=NULL)
	{
		printf("%d\n",temp->data);
        temp=temp->next;
}
}

