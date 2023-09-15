#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 typedef struct node{
int data;
struct node *next;
}NODE;

struct node *create(NODE *list){
    NODE *temp,*newnode;
    int i,n;
    printf("limit for node...");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(NODE*)malloc(sizeof(NODE));
        printf("enter node data....");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL){
            temp=list=newnode;


        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
   return list;
}

void disp(NODE *list){
    NODE *temp;
    for(temp=list;temp!=NULL;temp=temp->next){
    printf("%d\t",temp->data);

    }

}


void main(){
NODE *list=NULL,*plist=NULL,*nlist=NULL,*temp;
list=create(list);
temp=list;
while(temp!=NULL)
{
    if(temp->data>0){
             plist=insert(plist,temp->data);
    }
    else{
        nlist=insert(nlist,temp->data);
    }

}

}
