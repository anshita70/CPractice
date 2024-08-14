#include<stdio.h>
#include<stdlib.h>
struct Node
{
int num;
struct Node *next;
};
struct Node *start;
void addAtEnd(int num)
{
struct Node *t,*j;
t=(struct Node *)malloc(sizeof (struct Node));
t->num=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
j=start;
while(j->next!=NULL)
{
j=j->next;
}
j->next=t;
}
}
void insertATTop(int num)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=start;
start=t;
}
void traverseTopTobottom()
{
struct Node *t;
for(t=start;t!=NULL;t=t->next)
{
printf("%d\n",t->num);
}
}
int insertAt(int num, int pos)
{
struct Node *t,*p1,*p2;
int x;
if(pos<0)
{
return 0;
}
x=0;
p1=start;
while(p1!=NULL && x<pos)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL && x<pos)
{
return 0;
}
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=NULL;
if(start=NULL)
{
start=t;
return 1;
}
if(p1==start)
{
t->next=start;
start=t;
return 1;
}
if(p1==NULL)
{
p2->next=t;
return 1;
}
t->next=p1;
p2->next=t;
return 1;
}
int removeAt(int pos)
{
struct Node *p1,*P2;
int x;
if(pos<0)
{
return 0;
}
p1=start;
x=0;
while(p1!=NULL && x<pos)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL)
{
return 0;
}
if(p1==start)
{
start=start->next;
}
else
{
p2->next=p1->next;
}
free(p1);
return 1;
}
int main()
{
int ch, num,pos;
start=NULL;
while(1)
{
printf("1.Add at end\n");
printf("2.Insert at top\n");
printf("3.Insert at position\n");
printf("4.Remove from position\n");
printf("5.Traverse\n");
printf("6.Exit\n");
printf("Enter your choice:");
scanf("%d",& ch);
fflush(stdin);
if(ch==1)
{
printf("Enter the number to add at end:");
scanf("%d",& num);
fflush(stdin);
addAtEnd(num);
printf("%d added at end\n",num);
}
if(ch==2)
{
printf("Enter the number to insert at top:");
scanf("%d",&num);
fflush(stdin);
insertAtTop(num);
printf("%d inserted at top\n",num);
}
if(ch==3)
{
printf("Enter the number to insert at a position:");
scanf("%d",&num);
fflush(stdin);
printf("Enter position:");
scanf("%d",&pos);
if(insertAt(num,pos))
{
printf("%d inserted at position %d\n",num,pos);
}
else
{
printf("Invalid position :%d\n",pos);
}
}
if(ch==4)
{
printf("Enter the position of element to remove:");
scanf("%d",&pos);
fflush(stdin);
if(removeAt(pos))
{
printf("Element removed from position %d\n",pos);
}
else
{
printf("Invalid position %d\n",pos);
}
}
if(ch==5)
{
traverseTopTobottom();
}
if(ch==6)
{
break;
}
}
}


