#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
};

struct node *create(struct node *list)
{
struct node *temp,*newnode;
 int i,n;
 printf("Enter how many nodes...");
 scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->next=newnode->prev=NULL;
  printf("Enter value");
  scanf("%d",&newnode->data);
  if(list==NULL)
   {
    list=temp=newnode;
   }
  else
  {
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
  }
 }
  return list;
 }

void disp(struct node*list)
 {
  struct node*temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
   printf("%d \t",temp->data);
   }
 }

struct node *insert(struct node *list,int num,int pos)
{
 int i;
 struct node*newnode,*temp;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->next=newnode->prev=NULL;
 newnode->data=num;
 if(pos==1)
  {
   newnode->next=list;
   list->prev=newnode;
   list=newnode;
   return list;
  }
 for(i=1,temp=list;i<pos-1 &&temp!=NULL;i++);
 temp=temp->next;
 if(temp==NULL)
  {
    printf("\n position out of range...");
    return list;
  }
  newnode->next=temp->next;
  temp->next->prev=newnode;
  temp->next=newnode;
  newnode->prev=temp;
  return list;
}
struct node *delpos(struct node *list,int pos)
{
 int i;
 struct node *temp=list,*temp1,*temp2;
  if(pos==1)
  {
   list=list->next;
   free(temp);
   return list;
  }
 for(i=1,temp=list;i<pos-1 &&temp!=NULL;i++)
 if(temp==NULL)
 {
  printf("\n position out of range....");
  return list;
  }
  temp1=temp->next;
  temp2=temp1->next;
  temp->next=temp2;
  temp2->prev=temp;
  free(temp1);
  return list;
}

struct node *delbyvalue(struct node *list,int num)
{
 struct node *temp=list,*temp1;
 while(temp!=NULL)
 {
   if(temp->data==num)
    {
     if(temp==list)
     {
      list=list->next;
      list->prev=NULL;
      free(temp);
      return list;
      }
      else
      temp=temp->next;
      if(temp1->next!=NULL)
       temp1->next->prev=temp;
	temp->next=temp1->next;
       }
      }
      return list;
}

int main()
{
 struct node *list=NULL;
 int  ch,num,pos;
 
 do
 {
  printf("\n 1-create liste \n 2- disp \n 3- insertvalue \n 4- delete by value \n 5-serch by value ");
  printf("\n Enter  choice");
  scanf("%d",&ch);
   switch(ch)
   {
   case 1 :list=create(list);
	   break;
   case 2 :disp(list);
	   break;
   case 3 :printf("Enter position ");
	   scanf("%d",&pos);
	   printf("Enter number");
	   scanf("%d",&num);
	   list=insert(list,num,pos);
	   disp(list);
	   break;
   case 4 :printf("Enter number");
	   scanf("%d",&pos);
	   list=delpos(list,pos);
	   disp(list);
	   break;
   case 5 :printf("Enter number");
	   scanf("%d",num);
	   list=delbyvalue(list,num);
	   disp(list);
	   break;
  default :printf("Invalid value...");

  }

  }while(ch<7);

 
   return 0;
  }