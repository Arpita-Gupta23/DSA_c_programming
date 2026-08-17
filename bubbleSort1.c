#include<stdio.h>
void main()
{
int i,j,k,t;
int x[]={8,3,4,10,5};
for(k=0; k<5; k++)
{
printf("%d ",x[k]);
}
printf("\n");
for(i=3; i>=0; i--)
{
for(j=0; j<=i; j++)
{
  if(x[i]>x[j+1])
  {
  t=x[i];
  x[i]=x[j+1];
  x[j+1]=t;
  }
}
}
for(k=0; k<5; k++)
{
printf("%d ",x[k]);
}
}