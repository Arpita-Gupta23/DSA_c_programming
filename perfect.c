#include<stdio.h>
void main()
{
int i;
int n=6;
int s=0;
for(i=1; i<n; i++)
{
if(n%i==0)
{
s=s+i;
}}
if(n==s)
{
printf("No. is perfect\n");
}
else
{
printf("No. is not perfect\n");
}
}