#include<stdio.h>
int main()
{
int x[10],y,largest,smallest,secondlargest;
y=0;
while(y<=9)
{
printf("enter a number");
scanf("%d",& x[y]);
y++;
}
largest=x[10];
smallest=x[10];
y=1;
while(y<=9)
{
if (x[y]>largest)
{
largest=x[y];
}
if(x[y]<smallest)
{
smallest=x[y];
}
y++;
}
if(smallest==largest)
{
printf("all are same,second largest cannot determined");
}
else
{
secondlargest=smallest;
y=0;
while(y<=9)
{
if(x[y]>secondlargest && x[y]!=largest)

{
secondlargest=x[y];
}
y++;
}
printf("secondlargest %d\n",secondlargest);
}
return 0;
}