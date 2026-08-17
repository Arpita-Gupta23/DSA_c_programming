#include<stdio.h>
void show(int n)
{
if(n<=0)return;
show(n-1);
show(n-3);
printf("%d\t",n);
}
int main()
{
show(7);
}