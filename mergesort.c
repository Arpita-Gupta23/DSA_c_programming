#include<stdio.h>
void sum(int a[], int b[], int c[], int n1, int n2);
void show(int x[],int n)
{
	if(n<=1)return;
	int m1=n/2;
	int m2=n-m1;
	int i,j;
	int a[m1];
	int b[m2];
	for(i=0; i<m1; i++)
	{
		a[i]=x[i];
	}
	for(j=0; j<m2; j++)
	{
		b[j]=x[j+m1];
	}
	show(a,m1);
	show(b,m2);
	sum(a,b,x,m1,m2);
}
	void sum(int a[], int b[], int c[], int n1, int n2)
	{
		int i,j,k;
		for(i=j=k=0; i<n1 && j<n2;)
		{
			if(a[i]< b[j])
			{
			c[k++]=a[i++];
			}
			else{
			c[k++]=b[j++];
			}
		}    
		while(i<n1)
			c[k++]=a[i++];
		while(j<n2)
			c[k++]=b[j++];
		
	}
	void main()
	{
		int i; 
		int n=8;
		int x[]={56,29,35,42,15,41,75,21};
		show(x,n);
		for(i=0; i<n; i++)
		{
			printf("%d\n", x[i]);
		}
	}
	
	
