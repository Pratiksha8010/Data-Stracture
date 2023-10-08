// #include<stdio.h>
// #include<stdlib.h>
// #include<malloc.h>
//  typedef struct node{
// int data;
// struct node *next,*prev;
// }NODE;

// struct node *create(NODE *list){
//     NODE *temp,*newnode;
//     int i,n;
//     printf("limit for node...");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         newnode=(NODE*)malloc(sizeof(NODE));
//         printf("enter node data....");
//         scanf("%d",&newnode->data);
//         newnode->next=NULL;
//         if(list==NULL){
//             temp=list=newnode;


//         }
//         else{
//             temp->next=newnode;
//             newnode->prev=temp;
//             temp=newnode;
//         }
//     }
//    return list;
// }

// void disp(NODE *list){
//     NODE *temp=list;
//  do
//  {
//     printf("%d\t",temp->data);
//     temp=temp->next;
//  }while(temp!=NULL);
// }

// NODE *rev(NODE *list)
// {
// NODE *temp;
// for(temp=list;temp!=NULL;temp=temp->next);

// for(temp=list;temp!=list->prev;temp=temp->prev){
   
// printf("%d",temp->data);
//  temp=temp->prev;
// }

//     return list;
// }


// int main(){
//     NODE *list=NULL;
    
//     list=create(list);
//     printf("\n original list is.......");
//     disp(list);
//     printf("\n reverse list is........");
//     list=rev(list);
//     disp(list);
// }



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
NODE *rev(NODE *list)
{
   NODE *temp,*temp1;
   for(temp=list;temp!=NULL;temp=temp->next);
   for(temp1=temp;temp1!=list;temp1=temp1->){
       
   }

    return list;
}

int main(){
    NODE *list=NULL;
    
    list=create(list);
    disp(list);
    printf("\n reverse list is....");
    list=rev(list);
    disp(list);
}