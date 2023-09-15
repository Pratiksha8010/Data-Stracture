#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
int data;
struct node *next;
}NODE;
NODE *create(NODE *list){
    int n,i;
    NODE *temp,*newnode;
    printf("\n enter limit for newnode.....");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(NODE*)malloc(sizeof(NODE));
        printf("\n enter node values......");
        scanf("%d",&newnode->data);
           newnode->next=NULL;

           if(list==NULL){
            temp=newnode;
            list=newnode;

           }
          else {
            temp->next=newnode;
            temp=newnode;
           }
    }

    return list;
}

void disp(NODE *list)
{
NODE *temp;
for(temp=list;temp!=NULL;temp=temp->next){
printf("%d\t",temp->data);
}

}

void count(NODE *list)
{
NODE *temp;
int eno=0,ono=0;
for(temp=list;temp!=NULL;temp=temp->next){
    if(temp->data%2==0){
        eno++; 
    } 
    else{
        ono++;
    } 
}
printf("\n evan total num is.....%d",eno);
printf("\n odd total num is.....%d",ono);
}
int main()
{

NODE *list=NULL;
clrscr();
list=create(list);
disp(list);
count(list);
getch();
    return 0;
}