#include<stdio.h>
#include<stdlib.h>

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
  printf("%d\t",temp->data);
 }
}

void div1(NODE *list){
    int c=0,i,pos;
    NODE *temp,*temp1;
    for(temp=list;temp!=NULL;temp=temp->next){
         c++;
    }
    pos=c/2;
   // printf("%d",pos);
   printf("\n first list is.....\n");
    for(i=1,temp=list;temp->next!=NULL&&i<pos+1;i++,temp=temp->next){
        
        printf("%d\t",temp->data);
    }
        temp1=temp;
      printf("\n secound list is.....\n");
      for(temp1=temp;temp1!=NULL;temp1=temp1->next){
        printf("%d\t",temp1->data);

      }

}



int main(){
    NODE *list=NULL;
    
    list=create(list);
    printf("\n original list is.......");
    disp(list);
    printf("\n------------------------------------------\n");
    div1(list);

}