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
NODE *insertbeg(NODE *list,int num){
NODE *newnode;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->data=num;
newnode->next=list;
list->prev=newnode;
list=newnode;



    return list;
}

 NODE *insertend(NODE *list,int num){
NODE *temp,*newnode;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->data=num;
   newnode->next=NULL;
for(temp=list;temp->next!=NULL;temp=temp->next);
       temp->next=newnode;
       newnode->prev=temp;
    
return list;
}
NODE *insertmid(NODE *list,int num,int pos){
NODE *temp,*newnode;
int i;
newnode=(NODE*)malloc(sizeof(NODE));
newnode->data=num;
for(i=1,temp=list;i<-pos && temp->next!=NULL;i++,temp=temp->next);
newnode->next=temp->next;
temp->next->prev=newnode;
temp->next=newnode;
newnode->prev=temp;


    return list;
}
NODE *delbeg(NODE *list){
    NODE *temp;
    temp=list;
    list=list->next;
    free(temp);


    return list;
}
NODE *delend(NODE *list){
    NODE *temp1,*temp2;
    for(temp1=list;temp1->next->next!=NULL;temp1=temp1->next);
        temp2=temp2->next;
        temp1->next=NULL;

     free(temp1);
    return list;
}
NODE *delmid(NODE *list ,int pos){
NODE *temp1,*temp2;
int i;
for(i=1,temp1=list;i<-pos && temp1->next!=NULL; i++,temp1=temp1->next);
temp2=temp1->next;

temp1->next=temp2->next;
temp2->next->prev=temp1;

    return list;
}


int main(){
int ch,num,pos;
NODE *list=NULL;
do{
    printf("\n 1-create \n 2- disply\n 3-inser begining...4-insert end \n 5-insert mid \n");
    printf("6-delete beg\n 7-delete end \n 8-delete mid \n enter choice......");
    
    scanf("%d",&ch);
switch(ch){
case 1:
 list=create(list);
 break;
 case 2:
 disp(list);
 break;
 case 3:
 printf("enter num to insert.....");
 scanf("%d",&num);
list= insertbeg(list,num);
break;
case 4:
 printf("enter num to insert.....");
 scanf("%d",&num);
list=insertend(list,num);
break;
case 5:
 printf("enter num to insert.....");
 scanf("%d",&num);
 printf("enter pos...to insert");
 scanf("%d",&pos);
list=insertmid(list,num,pos);
break;
case 6:
list=delbeg(list);
break;
case 7:
list=delend(list);
case 8:
printf("enter pos to delete node data......");
scanf("%d",&pos);
list=delmid(list,pos);
}
}while(ch<9);
    
}
