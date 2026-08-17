#include<stdio.h>
void show(int n)
{
if(n<1)return;
show(n-2);
show(n-3);
printf("%d\t",n);
}
int main()
{
show(12);
}