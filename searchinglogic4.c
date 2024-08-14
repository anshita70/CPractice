#include<stdio.h>
int main()
{
int x[10],y,lookfor,count;
y=0;
while(y<=9)
{
printf("enter a number:");
scanf("%d",& x[y]);
y++;
}
lookfor=x[10];
y=1;
count=1;
while(y<=9)
{
if(lookfor==x[y])
{
count++;
}
y++;
}
printf("count of %d\n",lookfor,count);
return 0;
}