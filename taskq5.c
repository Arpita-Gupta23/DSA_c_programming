#include<stdio.h>
void show(int n)
{
if(n<1)return;
show(n-1);
printf("%d\t",n);
show(n-3);
}
int main()
{
show(7);
}