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
    NODE *temp=list;
 
 for(temp=list;temp!=NULL;temp=temp->next){
     printf("%d",temp->data);
 }

}
NODE *sort_a(NODE *list)
{
    NODE *temp,*temp1;
 int t;    
for(temp=list;temp!=NULL;temp=temp->next){
    //for(temp1=list;temp1!=NULL;temp1=temp1->next){
    // toch element it self sobt compare nko 
    //so secound loop start with temp->next
    for(temp1=temp->next;temp1!=NULL;temp1=temp1->next){
          if(temp->data>temp1->data){

            t=temp->data;
            temp->data=temp1->data;
            temp1->data=t;


          }
    }

return list;
}


}

int main(){
    NODE *list=NULL;
    
    list=create(list);
    disp(list);
        printf("\n your sorted linked list is....\n");
    list=sort_a(list);
    disp(list);
}