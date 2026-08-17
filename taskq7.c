#include<stdio.h>
void show(int n)
{
if(n<=0)return;
show(n-2);
printf("%d\t",n);
show(n-4);
}
int main()
{
show(10);
}