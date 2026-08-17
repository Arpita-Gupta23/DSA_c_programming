#include<stdio.h>
void show(int n)
{
if(n<=0)return;
show(n-1);
printf("%d\t",n);
show(n-4);
}
int main()
{
show(9);
}