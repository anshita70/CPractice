#include<stdio.h>
int main()
{
int e,f;
char a[21],b[21];
printf("enter a string");
scanf("%s",a);
fflush (stdin);
printf("enter another string");
scanf("%s",b);
fflush (stdin);
e=0;
while(a[e]!='\0')
{
e++;
}
f=0;
while(b[f]!='\0')
{
a[e]=b[f];
e++;
f++;
} 
a[e]='\0';
printf("%s",a);
return 0;
}