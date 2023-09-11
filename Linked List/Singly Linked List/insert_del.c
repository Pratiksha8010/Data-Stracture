#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

};
struct node*create(struct node*list){
    int i,n;
    struct node*newnode,*temp;
    printf("enter limit...");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value one by one....");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(list==NULL){
            temp=newnode;
            list=newnode;


        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    return list;

}

void disp(struct node*list){
    struct node*temp;
    for(temp=list;temp!=NULL;temp=temp->next){
        printf("%d\t",temp->data);

    }
    

}

struct node*insertbig(struct node*list,int num){
    struct node* newnode;
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=num;

          newnode->next=list;
          list=newnode;

return list;

}

struct node*insertmid(struct node*list,int num,int pos){
struct node*temp,*newnode;
int i;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   for(i=1,temp=list;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next=newnode;
    return list;
}
struct node*insertend(struct node*list,int num){
             struct node*temp,*newnode;
             newnode=(struct node*)malloc(sizeof(struct node));
             newnode->data=num;
             for(temp=list;temp->next!=NULL;temp=temp->next);
             temp->next=newnode;
             newnode->next=NULL;


    return list;
}
struct node*delbeg(struct node*list){
    struct node*temp;
    temp=list;
    list=list->next;
    free(temp);
    return list;
}
struct node*delmid(struct node*list,int pos){
    struct node*temp,*temp1;
    int i;
    for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);

    return list;

}
struct node*delend(struct node*list){
    struct node*temp,*temp1;
    for(temp=list;temp->next->next!=NULL;temp=temp->next);
    temp1=temp->next;
    temp->next=NULL;
    free(temp1);    
    return list;
}

int main(){
    struct node*list=NULL;
    int ch,num,pos;
    do{
        printf("\n1-create\n 2-dis\n3-insert fist\n 4-insert mid\n5-insert end\n 6-delete first \n 7-delete mid \n8-delete end\n...enter choice....");
      scanf("%d",&ch);
      switch(ch){
           case 1:list=create(list);
           break;
           case 2:disp(list);
           break;
           case 3:printf("enter num to insert...");
           scanf("%d",&num);
           list=insertbig(list,num);
           break;
            case 4:printf("enter num to insert...");
           scanf("%d",&num);
           printf("\n enter position....");
           scanf("%d",&pos);
           list=insertmid(list,num,pos);
           break;
        case 5:printf("enter num to insert...");
           scanf("%d",&num);
           list=insertend(list,num);
           break;
           case 6:list=delbeg(list);
           break;
           case 7:printf("enter possition..");
           scanf("%d",&pos);
           list=delmid(list,pos);
        break;
           case 8:list=delend(list);
           break;
      }
    }while(ch<9);

}


