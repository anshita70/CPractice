#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
time_t x;
time(&x);
struct tm *now;
now=localtime(&x);
printf("%d %d %d",now->tm_mday,now->tm_mon+1,now->tm_year+1900);
return 0;
}