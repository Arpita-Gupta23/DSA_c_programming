#include<stdio.h>
void show(int n)
{
if(n<=0)return;
printf("%d\t",n);
show(n-2);
show(n-4);
}
int main()
{
show(10);
}