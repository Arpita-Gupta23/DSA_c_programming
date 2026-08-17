#include<stdio.h>
int c=0;
void show(int n)
{
c++;
if(n<=0)return;
show(n-1);
show(n-1);
}
int main()
{
show(9);
printf("%d\n",c);
}