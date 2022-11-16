#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
//funtion to insert an element in circulr queue
int q[SIZE];
int rear=-1,front=-1;
void insertq(int item)
{
int r1= rear;
r1=(r1+1)%SIZE;
if (r1==front)
printf("Queue is full\n");
else
{
rear=r1;
q [rear]=item;
}
}

//funtion to delete an element from circular queue
int deleteq()
{
if(rear==front)
printf("Queue is empty\n");
else
front=(front+1)%SIZE;
return q[front];
}

//search an item in circular queue
int searchq(int item)
{
int t;
t=front;
if(front!=rear) //Q is not empty
{
t=(t+1)%SIZE;
while(q[t]!=item&&t!=rear)
{
t=(t+1)%SIZE;
}
if(q[t]==item)
return t+1;
else
return 0;
}
else
return 0;
}

void main()
{
int item,opt,ans;
do
{
printf("...............Options...................\n");
printf("1.insert:\n");
printf("2.Delete:\n");
printf("3.Search:\n");
printf("4.Exit:\n\n");
printf("Enter an option:\n");
scanf("%d", &opt);
switch(opt)
{
case 1:printf("data:\n");
       scanf("%d", &item);
       insertq (item);
       break;
case 2:item=deleteq();
       printf("Item %d deleted\n" ,item);
       break;
case 3:printf("No to search:");
       scanf("%d", &item);
       ans=searchq(item);
       if(ans==0)
       printf("Item not found\n");
       else
       printf("found at %dth position\n", ans);
       break;
case 4:exit(0);
}
}
while(1);
}







