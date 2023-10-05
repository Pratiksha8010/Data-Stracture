#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 typedef struct node
 {
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
        
        if(list==NULL){
            temp=list=newnode;
            newnode->next=list;
            newnode->prev=list;


        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=list;
            list->prev=newnode;
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


int main(){
    NODE *list=NULL;
    int num,ch;
    do{
        printf("\n 1-create \n2-disp....");
        scanf("%d",&ch);
        switch(ch){
    case 1:
    list=create(list);
    break;
    case 2:
    disp(list);
    break;
        } 


}while(ch<3);
 return 0;   
}
