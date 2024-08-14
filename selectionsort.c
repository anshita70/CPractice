#include<stdio.h>
int main()
{
int x[10],y,e,f,g,m;
for(y=0;y<=9;y++;)
{
printf("Enter a number");
scanf("%d",&x[y]);
}
e=0;
while(e<=8)
{
m=e;
f=e+1;
while(f<=9)
{
m=f;
}
f++;
}
g=x[e];
x[e]=x[m];
x[m]=g;
}
e++;
for(y=0;y<=9;y++;)
{
printf("%d",x[y]);
}
return 0;
}