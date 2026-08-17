#include<stdio.h>
void show(int n)
{
if(n==1)return;
show(n-1);
printf("%d\n",n);
}
void main()
{
show(5);
}