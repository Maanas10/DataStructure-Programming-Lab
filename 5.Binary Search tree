#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *lchild,*rchild;
};
struct node *insert(struct node *root,int data)
{
struct node *t1,*t2;
t1=root;
t2=(struct node *)0;
while(t1!=(struct node *)0 && t1->data!=data)
{
t2=t1;
if(data<t1->data)
t1=t1->lchild;
else
t1=t1->rchild;
}
if(t1!=(struct node *)0)
printf("duplicate:/n");
else
{
t1=(struct node *) malloc (sizeof(struct node));
t1->data=data;
t1->lchild=t1->rchild=(struct node *)0;
if(root==(struct node *)0)
root=t1;
else
{
if(data<t2->data)
t2->lchild=t;
else
t2->rchild=t;
}
}
return root;
}
 
struct node *search(struct node *root,int item);
{
struct node *t=root;
while(t!=(struct node *)0 && t->data1=item)
if(item<t->data)
t=t->lchild;
else
t=t->rchild;
return t;
}
struct node *delete(struct node *root,int item);
{
struct node *t1,par;
t1=root;
par=(struct node *)0;
while(t1!=(struct node *)0 && t->data!=item)
{
par=t;
if(item<t->data)
t=t->lchild;
else t=t->rchild;
}
if(t==(struct node *)0)
printf("%d not found \n",item)
else
{
if(t->lchild==(struct node *)0 && t->rchild==(struct node *)0)
{
if(par==(struct node *)0)
root=(struct node *)0;
else
if(t->data>par->data)
par->rchild==(struct node *0);
else
par->lchild==(struct node *)0;
}
else if(t->lchild==(struct node *)0 !! t->rchild==(struct node *)0)
{
if(par==(struct node *)0)
root=root->lchild==(struct node *)0 ? t->rchild:t->lchild;
else
par->lchild=t->lchild==(struct node *)0 ? t->rchild:t->lchild
else
{
supar=t;
suc=t->rchild;
while(suc->lchild!=0)
{
supar=suc;
suc=suc->lchild;
}
t->data=suc->data;
if(suc->data<suc par->data)
sucpar->lchild=suc->rchild;
else
sucpar->rchild=suc->rchild;
t=suc;
}
free(t);
return root;
}
int main()
struct node *t=struct node *0;
int data,opt;
for(: :)
{
printf("1.insert\n");
printf("2.display\n");
printf("3.search\n");
printf("4.delete\n");
printf("5.exit\n");
printf("option\n");
scanf("%d",&opt);
switch(opt)
{
case 1:
      printf("data:")
      scanf("%d",&data);
      t=insert(t,data);
      break;
case 2:printf("item to search:");
    scanf("%d",&data);
    t1=search(t,data);
    if(t!=(struct node *)0)
    printf("not found");
    else
    printf("found");
    break;
case 3:printf("item to delete:");
    scanf("%d",&data);
    t=search(t,data);
    printf("item deleted %d",data);
    break;
case 4:exit(0);
    }
