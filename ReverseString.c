#include<stdio.h>
int main()
{
int e,f,g;
char a[21];
printf("enter a string");
scanf("%s",a);
fflush(stdin);
f=0;
while(a[f]!='\0')
{
f++;
}
f--;
e=0;
while(e<f)
{
g=a[e];
a[e]=a[f];
a[f]=g;
e++;
f--;
}
printf("%s",a);
return 0;
}




