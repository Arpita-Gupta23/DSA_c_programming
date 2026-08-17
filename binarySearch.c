#include<stdio.h>
int binarySearch(int x[], int n,int se)
{
int si=0;
int mid;
while(si<=n)
{
mid=(si+n)/2;
if(x[mid]==se)
{
return mid;
}
else if(se<x[mid])
{
n=mid-1;
}
else{
si=mid+1;
}
}
return -1;
}
void main()
{
int n=5;
int x[]={6,7,9,17,18};
printf("%d\n",binarySearch(x,n,18));
}