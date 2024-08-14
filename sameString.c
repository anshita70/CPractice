#include<stdio.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string");
scanf("%s",a);
fflush(stdin);
printf("enter a string");
scanf("%s",b);
fflush(stdin);
x=0;
while(a[x]!='\0' && b[x]!='\0'&& a[x]==b[x])
{
x++;
}
if(a[x]=='\0'&&b[x]=='\0' )
{
printf("%S is same as %S",a,b);
}
else
{
printf("%S is not same as %S",a,b);
}
return 0;
}
