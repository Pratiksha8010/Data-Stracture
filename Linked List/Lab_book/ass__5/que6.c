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
void   disp_pos(NODE *list,int num){
int p;
NODE *temp;
for(temp=list;temp!=NULL;temp=temp->next){
if(temp->data==num){
  printf("found..");
  break;
  

}
else{
    printf("not found....");
    break;
    
}

}

}

struct node*swap(NODE *list, int pos1, int pos2){
    struct node *temp1,*temp2;
    int t;
    for(temp1=list;temp1!=NULL&& pos1>0;temp1=temp1->next,pos1--);
    for(temp2=list;temp2!=NULL && pos2>0;temp2=temp2->next,pos2--);
     t=temp1->data;
     temp1->data=temp2->data;
     temp2->data=t;


    return list;
}


struct node* delmid(NODE *list,int pos1){
  NODE *temp,*temp1;
  int i;
  for(i=1,temp=list;i<pos1-1&&temp!=NULL;temp=temp->next,i++);
  temp1=temp->next;
  temp->next=temp1->next;
  free(temp1);

    return list;
}

int main(){
    NODE *list=NULL;
    int num,ch,pos1,pos2,p;
    do{
        printf("\n 1-create \n2-disp\n3-num search\n4-swanp to nodes\n5-delete node with position\n enter choice....");
        scanf("%d",&ch);
        switch(ch){
    case 1:
    list=create(list);
    break;
    case 2:
    disp(list);
    break;
    case 3:
    printf("enter num to serch....");
    scanf("%d",&num);
      
    disp_pos(list,num);
    
      break;
      case 4:
      printf("enter two position to swap.....");
      scanf("%d%d",&pos1,&pos2);
      list=swap(list,pos1,pos2);
      break;
      case 5:
      printf("enter position to delete node....");
      scanf("%d",&pos1);
      list=delmid(list,pos1);
             break;
        } 
          
      
}while(ch<6);

}