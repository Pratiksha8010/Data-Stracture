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
 for(int i=0;i<n;i++){
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

NODE *insertmid(NODE *list,int num,int pos)
{
int i;
NODE *temp,*newnode;
newnode=(NODE *)malloc(sizeof(NODE));
newnode->data=num;
for(i=1,temp=list;i<(pos-1)&&temp->next!=list;i++,temp=temp->next);
newnode->next=temp->next;
temp->next=newnode;

    return list;
}

int main()
{
    NODE *list=NULL;
    int num,pos;
 list=create(list);
 disp(list);
 printf("\n enter num to insert ");
 scanf("%d",&num);
 printf("\n enter pos to insert...");
 scanf("%d",&pos);
 list=insertmid(list,num,pos);
 disp(list);

    return 0;
}