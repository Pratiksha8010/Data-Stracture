#include<stdio.h>
#include<malloc.h>
typedef struct node{
    int data;
    struct node *next,*prev;
}NODE;
NODE *create(NODE *list){
    NODE *temp,*newnode;
    int i,n;
    printf("enter limit to node.....");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(NODE*)malloc(sizeof(NODE));
        printf("enter node data.....");
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
int main(){
int ch;
NODE *list=NULL;
do{
    printf("\n 1-create \n 2- disply\n enter choice......");
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