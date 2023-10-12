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
        
        if(list==NULL){
            temp=list=newnode;
            newnode->next=list;


        }
        else{
            temp->next=newnode;
            
            newnode->next=list;
            temp=newnode;
        }
    }
   return list;
}

void disp(NODE *list){
    NODE *temp=list;

do{
    printf("%d\t",temp->data);
temp=temp->next;

}while(temp!=list);
}


int main(){
    NODE *list=NULL;
    
    list=create(list);
    disp(list);

}