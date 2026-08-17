#include<stdio.h>
void show(int n)
{
if(n==1)return;
printf("%d\n",n);
show(n-1);
}
int main()
{
show(5);
}