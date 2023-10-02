#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node*next,*prev;
}NODE;

NODE*create(NODE *list)
{
    int i,n;
    NODE *temp,*newnode;
    printf("\n enter limit for node....");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("enter node data....");
    scanf("%d",&newnode->data);
    if(list==NULL){
        temp=list=newnode;
        newnode->next=list;
        list->prev=newnode;

    }
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
    temp->next=list;
    list->prev=temp;

}
    }


    return list;
}
void *disp(NODE *list)
{
NODE *temp=list;

do{
    printf("%d\t",temp->data);
temp=temp->next;
}while(temp!=list);

    
}

int main(){
struct node *list=NULL;
list=create(list);
disp(list);
    return 0;
}