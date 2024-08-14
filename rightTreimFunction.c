#include<stdio.h>
#include<string.h>
void righttrim(char*p)
*p=0;
while(*p!='\0')
{
*p++;
}
*p--;
while(*p>=0&& a[p]==' ')
{
*p--;
}
a[p+1]='\0'
}
char a[22];
printf("enter a string");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
righttrim(a)
printf("%s",a);
return 0;
}