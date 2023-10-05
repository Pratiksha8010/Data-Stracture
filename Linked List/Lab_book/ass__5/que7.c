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

NODE *aord(NODE *list){

NODE *temp;
int t=0;
for(temp=list;temp->next!=NULL;temp=temp->next){
if(temp->data>temp->next->data){
    t=temp->data;
    temp->data=temp->next->data;
    temp->next->data=t;

}
}

    return list;
}



int main(){
    NODE *list=NULL;
    
    list=create(list);
    disp(list);
    printf("\n list in ascending order......\n ");
    list=aord(list);
    disp(list);
}