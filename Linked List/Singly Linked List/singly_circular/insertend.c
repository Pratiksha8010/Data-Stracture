#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE *create(NODE*list)
{
 NODE *newnode,*temp;
 int i,n;
 printf("enter limit for node....");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
newnode=(NODE*)malloc(sizeof(NODE));
printf("\n enter newnode data....");
scanf("%d",&newnode->data);
 if(list==NULL){
    temp=list=newnode;

 }
 else{
    temp->next=newnode;
    newnode->next=list;
    temp=newnode;
 }
 }

    return list;
}

 void disp(NODE *list)
{
NODE *temp=list;
do
{
printf("%d\t",temp->data);

temp=temp->next;

}while(temp!=list);

}
NODE *insertend(NODE *list,int num)
{
   NODE *temp,*newnode;

   newnode=(NODE*)malloc(sizeof(NODE));
   newnode->data=num;

   for(temp=list;temp->next!=list;temp=temp->next);
temp->next=newnode;
newnode->next=list;
    return list;
}

int main()
{
    NODE *list=NULL;
    int num;
 list=create(list);
 disp(list);
 printf("\n enter num to insert end...");
 scanf("%d",&num);
 list=insertend(list,num);
 disp(list);

    return 0;
}