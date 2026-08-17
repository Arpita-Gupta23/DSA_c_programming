#include<stdio.h>
void show(int n, char s, char d, char t);
void main()
{
show(3,'A','C','B');
}
void show(int n,char s, char d, char t)
{
if(n==1)
{
printf("move %d from %c => %c\n",n,s,d,t);
}
else
{
show(n-1,s,t,d);
printf("move %d from %c => %c\n",n,s,d,t);
show(n-1,t,d,s);
}