#include<stdio.h>
int main()
{
int x, num,rnum;
printf("enter a number:");
scanf("%d",num);
if(num<0)
{
x=num*-1;
}
else
{
x=num;
}
rnum=0;
while(x>num)
{
rnum=(rnum*10)+(x%10);
x=x/10;
}
if(num<0)
{
num=rnum*-1;
}
else
{
num=rnum;
}
printf("%d",num);
return 0;
}