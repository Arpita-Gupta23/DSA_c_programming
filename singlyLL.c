#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start=NULL;
int i = 0;
int s = 0;

void insertAtB(int);
void insertAtE(int);
void deleteAtE();
void deleteAtB();
int countNode();
void revdisplay(struct Node *temp);
void btod(struct Node *temp);
void insertAtSP(int,int);
void showAll();
void main()
{

//insertAtE(10);
  //  insertAtE(20);
    //insertAtE(30);
  //  insertAtE(40);
    //insertAtE(50);
	

	
	 insertAtE(1);
    insertAtE(0);
    insertAtE(1);
    insertAtE(1);
    insertAtE(0);
	
    showAll();
    printf("...............\n");
   //printf("%d\n",countNode());
    //printf("...............\n");
	
	
	//deleteAtE();
	//deleteAtE();
	//deleteAtE();
	//deleteAtE();
	//deleteAtE();
	//showAll();
	  
	  
    //deleteAtB();
	//deleteAtB();
	//deleteAtB();
	//deleteAtB();o
	//deleteAtB();
   // showAll();
   
   //revdisplay(start);
   //showAll();
   
   btod(start);
   printf("%d\n", s);
   //showAll();
    //printf("...............\n");
	//insertAtSP(2,15);
	//insertAtSP(4,25);
	//insertAtSP(6,35);
	//insertAtSP(8,45);
	//insertAtSP(10,55);
	//showAll();
	//printf("...............\n");
    //printf("%d\n ",countNode());
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
void deleteAtB()
{
 if(start==NULL)
  {
   printf("List is empty\n");
      return;
   }
    struct Node *temp1=start;
    start=start->next;
   free(temp1);
}
void insertAtSP(int p, int x)
{
	if(p<=1)
	{
		insertAtB(x);
		return;
	}
	if(p>countNode())
	{
		insertAtE(x);
		return;
	}
	struct Node *temp = malloc(sizeof(struct Node));
	temp->data=x;
	int i; 
	struct Node *temp1=start;
	for(i=1; i<p-1; i++)
	{
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
}
int countNode()
{
  int c=0;
    struct Node *temp1=start;/////
    while(temp1!=NULL)
  {
       c++;
      temp1=temp1->next;
   }
   return c;
}



//void deleteAtE()
//{
	//if(start==NULL || start->next == NULL)
	//{
	//	deleteAtB();
	//	return;
	//}
	//struct Node *temp1=start;
	//struct Node *temp2=start;
	//while(temp1->next!=NULL)
	//{
	//	temp2=temp1;
	//	temp1=temp1->next;
	//}
//	temp2->next=NULL;
//	free(temp1);
//}






void deleteAtE()
{
	if(start==NULL || start->next == NULL)
	{
		deleteAtB();
		return;
	}
	struct Node *temp1=start;
	while(temp1->next->next!=NULL)
		{
		temp1=temp1->next;	
		}
		free(temp1->next);
		temp1->next=NULL;
}


void revdisplay(struct Node *temp)
{
	if(temp==NULL)return;
	revdisplay(temp->next);
	printf("%d\n",temp->data);
}

void btod(struct Node *temp)
{
	
	if(temp==NULL)return;
	btod(temp->next);
	s=s+(temp->data<<i++);
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