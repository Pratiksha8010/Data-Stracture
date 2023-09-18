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
NODE *delmid(NODE *list,int pos)
{
NODE *temp,*temp1;
int i;
for(i=1,temp=list;i<(pos-1)&&temp->next!=list;temp=temp->next,i++);
temp1=temp->next;
temp->next=temp1->next;
free(temp1);


    return list;
}

int main()
{
    NODE *list=NULL;
    int pos;
 list=create(list);
 disp(list);
 printf("\n enter pos to delete...");
 scanf("%d",&pos);
 list=delmid(list,pos);
 disp(list);

    return 0;
}