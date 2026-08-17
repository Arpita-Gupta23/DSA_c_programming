#include<stdio.h>
int c=0;
void show(int n)
{
c++;
if(n<=0)return;
show(n-2);
show(n-2);
}
int main()
{
show(12);
printf("%d\n",c);
}