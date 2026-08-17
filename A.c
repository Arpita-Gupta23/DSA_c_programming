#include<stdio.h>
int c=2;
void show()
{
	int i;
	for(i=1; i<=5; i++)
	{
	printf("%d ",i);
if(i==c)
{
c++;
show();
printf("ram ");
}
}
}
void main()
{
show();
}