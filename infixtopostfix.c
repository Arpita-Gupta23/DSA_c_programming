#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 50
void push(char);
char pop();
char peek();
char stack[CAPACITY];
bool isEmpty();
int pr(char ch);
int top=-1;
void main()
{
int i=0,k=0;
char input[CAPACITY];
char output[CAPACITY];
printf("Enter any expression=>\n");
scanf("%s",input);
while(input[i]!='\0')
{
if(input[i]=='(')
{
push(input[i]);
}
else if(input[i]>='A' && input[i]<='Z')
{
output[k++]=input[i];
}
else if(input[i]==')')
{
while(peek()!='(')
{
output[k++]=pop();
}
pop();
}
else{
while(pr(peek())>=pr(input[i]))
{
output[k++]=pop();
}
push(input[i]);
}
i++;
}
output[k++]='\0';
printf("%s\n",output);
}

void push(char x)
{
stack[++top]=x;
}

char pop()
{
return stack[top--];
}

char peek()
{
return stack[top];
}

bool isEmpty()
{
if(top==-1)return true;
return false;
}

int pr(char ch)
{
switch (ch)
{
case '(':
return 0;

case '+':
case '-':
return 1;

case '*':
case '/':
return 2;

case '^':
return 3;

}
}