#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
void insertAtB(int);
void insertAtE(int);
void bsort();
void showAll();
void main()
{
    insertAtE(5);
    insertAtE(4);
    insertAtE(3);
    insertAtE(2);
    insertAtE(1);
    showAll();
	
    printf("...............\n");
	
   bsort();
   showAll();
   
   printf("...............\n");
   
}
void insertAtB(int x)
{
    struct Node *temp=malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        printf("No space\n");
        return;
    }
    temp->data=x;
    temp->next=start;
    start=temp;
}
void insertAtE(int x)
{
    if(start==NULL)
    {
        insertAtB(x);
        return;
    }
    struct Node *temp=malloc(sizeof(struct Node));
    if(temp==NULL)
	{
		printf("No spac\n");
		return;
	}
    temp->data=x;
    temp->next=NULL;
    struct Node *temp1=start;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}
void bsort()
{
struct Node *p=start;
struct Node *q;
struct Node *temp=NULL;
int t;
while(temp!=start->next)
{
for(p=start; p->next!=temp; p=p->next)
{
q=p->next;
if(p->data> q->data)
{
t=p->data;
p->data=q->data;
q->data=t;
}
}
temp=q;
}
}
void showAll()
{
    struct Node *temp1=start;
    while(temp1!=NULL)
    {
        printf("%d\n",temp1->data);
        temp1=temp1->next;
    }
}