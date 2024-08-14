#include<stdio.h>
int main()
{
int x[10],y,lookfor,found;
y=0;
while(y<=9)
{
printf("enter a number:");
scanf("%d",&x[y]);
y++;
}
printf("Enter a number to search:");
scanf("%d", & lookfor);
found=0;
y=0;
while(y<=9)
{
if(lookfor==x[y])
{
found==1;
break;
}
y++;
}
if(found==0)
{
printf("%d not found\n",lookfor);
}
else
{
printf("%d found at index %d\n",lookfor,y);
}
return 0;
}
