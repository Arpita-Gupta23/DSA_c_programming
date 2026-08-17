#include<stdio.h>
void show(int x[],int n,int i)
{
	int l=i*2+1;
    int t;
            if(x[i]<x[l])
            {
        t=x[i];
		x[i]=x[l];
		x[l]=t;
            }
}
	void showloop(int x[], int n)
	{
	int i;
	 for(i=n/2-1; i>=0; i--)
	 {
	 show(x,n,i);
	 }
	 }
	void main()
	{
	int n=7;
		int x[]={1,2,3,4,5,6,7};
		showloop(x,n);
		int i;
    for(i=0; i<n; i++)
    {
        printf("%d\n",x[i]);
    }
}