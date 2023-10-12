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
    printf("limit for node...\n");
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
struct node*insertbeg(NODE *list, int num){
NODE *temp,*newnode;
temp=list;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->data=num;
newnode->next=list;
list=newnode;
return list;

}
struct node*rev(NODE*list){


    return list;
}
int count_node(NODE *list){
     int cnt=0;
     NODE* temp;
     for(temp=list;temp!=NULL;temp=temp->next){
        cnt++;

     }
     return cnt;

}

int main(){
    NODE *list=NULL;
    int ch,num,k;
    do{
    printf("\n 1-create\n2-disp\n4-count node \n3-insert node fisrt");
    printf(" \n 4-reverse list....\n enter choice......");

     scanf("%d",&ch);
     switch(ch){
   case 1:
    list=create(list);
    break;
    case 2:
    disp(list);
    break;
    case 3:
    printf("\nenter num to insert...");
    scanf("%d",&num);
    list=insertbeg(list,num);
    break;
    case 4:
    list=rev(list);
    printf("\n your reveres linked list is.....\n");

     }
}while(ch<5);
}