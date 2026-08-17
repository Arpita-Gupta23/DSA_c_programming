#include<stdio.h>
void show(int n)
{
if(n<1)return;
printf("%d\t",n);
show(n-2);
show(n-3);
}
int main()
{
show(12);
}