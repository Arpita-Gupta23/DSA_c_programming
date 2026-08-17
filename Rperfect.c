//recursion perfect
#include<stdio.h>

int perfect(int n, int i)
{
    if(i == n)
        return 0;

    if(n % i == 0)
        return i + perfect(n, i + 1);

    return perfect(n, i + 1);
}

void main()
{
    int n = 6;
    int s;

    s = perfect(n, 1);

    if(s == n)
        printf("No. is perfect\n");
    else
        printf("No. is not perfect\n");
}