#include<stdio.h>
void show(int x[],int n,int i)
{
	int l=i*2+1;
	int r=i*2+2;
	int max=i;
    int t;
            if(l<n && x[l] > x[max])
				
            {
			max=l;
			}
			if(r<n && x[r] > x[max])
			
            {
			max=r;
			}
			if(i!=max)
			{
        t=x[i];
		x[i]=x[max];
		x[max]=t;
		show(x,n,max);
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
	 void deleteDemo(int x[], int n)
	 {
		 n--;
		 x[0]=x[n];
		 showloop(x,n);
	 }
	void main()
	{
	int n=10;
		int x[]={11,12,13,14,15,16,17,18,19,20};
		showloop(x,n);
		deleteDemo(x,n);
		int i;
    for(i=0; i<9; i++)
    {
        printf("%d\n",x[i]);
    }
}