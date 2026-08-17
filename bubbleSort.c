#include<stdio.h>
int main()
{
    int x[]={15,40,3,52,1};
    int i,j,k,t;
    for(k=0; k<5; k++)
    {
        printf("%d ",x[k]);
    }
    printf("\n");
    for(i=3; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if(x[j]>x[j+1])
            {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
            
        }
    }
    for(k=0; k<5; k++)
    {
        printf("%d ",x[k]);
    }
}