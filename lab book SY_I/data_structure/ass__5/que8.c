#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 typedef struct node{
int data;
struct node *next,*prev;
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
            newnode->prev=temp;
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

int oddnode(NODE *list){
  NODE *temp;
  int  t=0,k;
  for(temp=list;temp!=NULL;temp=temp->next){
    if(temp->data%2!=0){
    t=temp->data;        
    }

  }

return t;
}



int main(){
    NODE *list=NULL;
    int t;
    list=create(list);
    disp(list);
    t=oddnode(list);
    printf("\n node with odd values containing.....\n");
    printf("%d",t);
}