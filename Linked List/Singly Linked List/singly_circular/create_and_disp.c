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

int main()
{
    NODE *list=NULL;
 list=create(list);
 disp(list);

    return 0;
}