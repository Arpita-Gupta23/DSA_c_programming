#include<stdio.h>
int isAnagram(char x[],char y[], int n1,int n2)
{

if(n1 !=n2)return 0;
int i=0;
int a[26]={0};
int b[26]={0};
while(i<n1)
{
a[x[i]-97]++;
b[y[i]-97]++;
i++;
}
for(i=0; i<26; i++)
{
if(a[i]!=b[i])
return 0;
}
return 1;
}
void main()
{
char x[]="abcaach";
char y[]="aachabc";
if(isAnagram(x,y,7,7))
{
printf("string is ana-gram\n");
}
else
{
printf("string is not ana-gram\n");
}
}