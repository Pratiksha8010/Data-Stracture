#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*next,*prev;
}NODE;

NODE*create(NODE *list)
{
    int i,n;
    NODE *temp,*newnode;
    printf("\n enter limit for node....");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("enter node data....");
    scanf("%d",&newnode->data);
    if(list==NULL){
        temp=list=newnode;
        newnode->next=list;
        list->prev=newnode;

    }
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
    temp->next=list;
    list->prev=temp;

}
    }


    return list;
}
void *disp(NODE *list)
{
NODE *temp=list;

do{
    printf("%d\t",temp->data);
temp=temp->next;
}while(temp!=list);

    
}
NODE*inserbeg(NODE *list,int num)
{

    NODE *temp,*newnode;
    for(temp=list;temp->next!=list;temp=temp->next);
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->data=num;

    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    temp->next=list;
    list->prev=temp;
    return list;
}

int main(){
    int num;
struct node *list=NULL;
list=create(list);
disp(list);

printf("\n enter done data to insert values.....");
scanf("%d",&num);
list=inserbeg(list,num);
printf("\n enter begining data list.....");
disp(list);
    return 0;
}