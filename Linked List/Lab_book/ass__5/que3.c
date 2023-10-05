#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node *next,*prev;
}NODE;

NODE *create(NODE *list)
{
    int n;
    NODE *temp,*newnode;
    printf("enter limit...");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode=(NODE *)malloc(sizeof(NODE));
        printf("enter newnode data....");

        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL){
             temp=list=newnode;
        }
        else{
            temp->next=newnode;
             temp=newnode;
            newnode->prev=temp;
           
        }

    }

    return list;
}
void *disp(NODE *list)
{
NODE *temp;
for(temp=list;temp!=NULL;temp=temp->next){
 printf("%d\t",temp->data);
}
}
int main(){
  NODE *list=NULL;
 list=create(list);
 disp(list);
    return 0;
}