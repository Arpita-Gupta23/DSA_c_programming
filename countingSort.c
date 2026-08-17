#include<stdio.h>
int show(int x[],int n)
{
int i;
int min=x[0];
for(i=1; i<n; i++)
{
if(min>x[i])
{
	min=x[i];
}
}
for(i=0; i<n; i++)
{
x[i]=x[i]-min;
}
int max=x[0];
for(i=1; i<n; i++)
{
	if(max<x[i])
{
	max=x[i];
}
}
max++;
int a[max];
for(i=0; i<max; i++)
{
a[i]=0;
}
int y[n];
for(i=0; i<n; i++)
{
a[x[i]]++;
}
for(i=1; i<max; i++)
{
a[i]+=a[i-1];
}
for(i=0; i<n; i++)
{
y[a[x[i]]-=1]=x[i];
}
for(i=0; i<n; i++)
{
x[i]=y[i]+min;
}
}
void main()
{
int n=8;
int x[]={2,7,7,1,-3,-5,5,9};
int i;
show(x,n);
for(i=0; i<n; i++)
{
	printf("%d\n",x[i]);
}
}