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
 do
 {
    printf("%d\t",temp->data);
    temp=temp->next;
 }while(temp!=NULL);

}


NODE  *work(NODE *list)
{
    NODE *temp,*temp1;
    for(temp=list;temp->next!=NULL;temp=temp->next);
       temp1=list;
       list=list->next;      
       temp->next=temp1;
        temp1->next=NULL;


// temp1=list;
// list=list->next;
// temp1->next=NULL;
// temp->next=temp1;
     return list;
      
}

int main(){
    NODE *list=NULL;
    
    list=create(list);
    disp(list);
    printf("\n .............");
  list=  work(list);
    disp(list);
    return 0;
}