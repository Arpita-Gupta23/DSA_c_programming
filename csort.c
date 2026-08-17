#include<stdio.h>
void csort(int x[],int n)
{
int j,t;
int g=n/1.3;
while(g>=1)
{
for(j=0; j<n-g; j++)
{
if(x[j]>x[j+g])
{
t=x[j];
x[j]=x[j+g];
x[j+g]=t;
}
}
g=g/1.3;
}
}
void main()
{
int n=13;
int i;
int x[]={4,0,3,2,7,1,8,5,9,6,12,11,5};
csort(x,n);
for(i=0; i<n; i++)
{
printf("%d\n",x[i]);
}
}
