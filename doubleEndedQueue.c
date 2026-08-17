//gcc doubleEndedQueue.c -o doubleEndedQueue.exe

//Double-Ended-Linear-Queue   by using array

#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 10

int x[CAPACITY];
int f=-1;
int r=-1;

bool isEmpty();
bool isFull();
void enqueueAtB(int);
void enqueueAtE(int);
int dequeueAtB();
int dequeueAtE();
int peek();
void showAll();

void main()
{
    enqueueAtE(10);
    enqueueAtE(20);
    enqueueAtE(30);

    showAll();

    printf("...............\n");

    enqueueAtB(5);

    showAll();

    printf("...............\n");

    dequeueAtB();

    showAll();

    printf("...............\n");

    dequeueAtE();

    showAll();

    printf("...............\n");
	 enqueueAtB(8);
	 showAll();
	  printf("...............\n");

    peek();

    printf("...............\n");

    if(isEmpty())
        printf("Deque is empty\n");
    else
        printf("Deque is not empty\n");
	
}


/* Check Empty */

bool isEmpty()
{
    if(f==-1)return true;
    return false;
}


/* Check Full */

bool isFull()
{
    if(f==0 && r==CAPACITY-1)return true;
    return false;
}


/* Insert at Beginning */

void enqueueAtB(int a)
{
    if(isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if(f==-1)
    {
        f=0;
        r=0;
        x[f]=a;
        return;
    }

    if(f==0)
    {
        printf("Beginning is full\n");
        return;
    }

    f--;
    x[f]=a;
}


/* Insert at End */

void enqueueAtE(int a)
{
    if(isFull())
    {
        printf("Deque is full\n");
        return;
    }

    if(f==-1)
    {
        f=0;
        r=0;
    }
    else
    {
        r++;
    }

    x[r]=a;
}


/* Delete at Beginning */

int dequeueAtB()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return -1;
    }
 int value=x[f];
    if(f==r)
    {
        f=-1;
        r=-1;
        return value;
    }

    f++;
	return value;
}


/* Delete at End */

int dequeueAtE()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return -1;
    }
 int value=x[r];
    if(f==r)
    {
        f=-1;
        r=-1;
        return value;
    }

    r--;
	return value;
}


/* Peek */

int peek()
{
    if(isEmpty())
    {
        printf("Deque is empty\n");
        return -1;
    }

    printf("Front = %d\n",x[f]);
    printf("Rear = %d\n",x[r]);
	return x[f];
}


/* Display */

void showAll()
{
    int i;

    if(isEmpty())
    {
        printf("Deque is empty\n");
        return;
    }

    for(i=f; i<=r; i++)
    {
        printf("%d ",x[i]);
    }

    printf("\n");
}