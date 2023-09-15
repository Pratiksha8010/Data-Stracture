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
void count(NODE *list){
    NODE *temp;
    int p=0,ni=0;
    for(temp=list;temp!=NULL;temp=temp->next){
    if(temp->data>0){
       p++;
    }
    else{
        ni++;
    }

    }

  printf("\n positive numbers are....%d",p);
  printf("\n negitive numbers are....%d",ni);
}

int main(){
    NODE *list=NULL;
    int cnt;
    list=create(list);
    disp(list);
    count(list);

}