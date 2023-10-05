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
    NODE *temp;
    for(temp=list;temp!=NULL;temp=temp->next){
    printf("%d\t",temp->data);

    }

}
NODE *swap(NODE *list,int pos,int pos1)
{
 NODE *temp,*temp1;
 int t,i;
  for(i=1,temp=list;i<pos && temp!=NULL;i++,temp=temp->next);
  for(i=1,temp1=list;i<pos1 && temp1!=NULL;i++,temp1=temp1->next);
t=temp->data;
temp->data=temp1->data;
temp1->data=t;
    return list;
}

NODE *search(NODE *list,int num)
{
    NODE *temp;
    if(list->data==num){
   return temp;
    }
    else{
for(temp=list;temp->next!=NULL;temp=temp->next);

    return temp;
    }
}


// NODE *delpos(NODE *list,int pos)
// {




//     return list;
// }

int main(){
    int num,ch,pos,pos1;
    NODE *list=NULL,*temp;
    do
    {
       printf("\n1-create\n2-disp\n3-search\n4-swap\n5-delete node with position\n enter your choice...\n");
       scanf("%d",&ch);
    switch(ch){

     case 1:list=create(list);
     break;
     case 2:
     printf("\n your linked list is....");
    disp(list);
    break;
    case 3:
    printf("\n enter num to search...");
    scanf("%d",&num);
    temp=search(list,num);

    if(temp!=NULL){
        printf("\n  found...");

    }
    else{
        printf("\n  not found...");
    }

    break;
    case 4:
    printf("\n enter two position's for swap nodes....");
    scanf("%d%d",&pos,&pos1);
    list=swap(list,pos,pos1);
    break;
    // case 5:
    // printf("\n enter position to delete node.......");
    // scanf("%d",&pos);
    // list=delmid(list,pos);
    }
    }while(ch<6);
 return 0;

}