//recursion palindrome
#include<stdio.h>

int palindrome(int n, int s)
{
    if(n == 0)
        return s;
return palindrome(n/10, s*10 + n%10);
}

void main()
{
    int n = 898;
    int s;
	int p = palindrome(n,0);
	if(p==n)
	
        printf("No. is palindrome\n");
    else
        printf("No. is not palindrome\n");
}