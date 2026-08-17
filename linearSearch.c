#include<stdio.h>
int linearSearch(int x[], int n,int se)
{
int i;
for(i=0; i<n; i++)
{
if(x[i]==se)
{
return i;
}
}
return -1;
}
void main()
{
int n=5;
int x[]={6,7,9,17,8};
printf("%d\n",linearSearch(x,n,9));
}