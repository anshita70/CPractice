#include<stdio.h>
int main()
{
int x;
char b[21];
printf("enter a string");
scanf("%s",b);
x=0;
while(b[x]!='\0')
{
if (b[x]>97 && b[x]<=122)
{
b[x]= b[x]-32;
}
x++;
}
printf("%s",b,x);
return 0;
}