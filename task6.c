#include<stdio.h>
void show(int x[],int y[],int z[],int m1,int m2)
{
	int i,j,k;
    for(i=0, j=0, k=0; i<m1 && j<m2;)
    {
            if(x[i]<y[j])
            {
        z[k++]=x[i++];
            }
            else{
				z[k++]=y[j++];
        }
	
    }
	while(i<m1)
	{
	z[k++]=x[i++];
	}
	while(j<m2)
	{
	z[k++]=y[j++];
	}
	}
	void main()
	{
		int x[]={1,5,10,15,20};
		int y[]={2,3,4,6,12};
		int z[10];
		show(x,y,z,5,5);
		int i;
    for(i=0; i<10; i++)
    {
        printf("%d ",z[i]);
    }
}