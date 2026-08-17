#include <stdio.h>
#define CAPACITY 10
char stack[CAPACITY];
int top = -1;
void push(char);
char pop();
int i = 0;
void main()
{
    char x[] = "hello";

    // PUSH
    while(x[i] != '\0')
    {
        push(x[i]);
        i++;
    }
    i = 0;
    // POP
    while(top >= 0)
    {
        x[i] = pop();
        i++;
    }
    x[i] = '\0';
    printf("Reverse string = %s\n", x);
}
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}