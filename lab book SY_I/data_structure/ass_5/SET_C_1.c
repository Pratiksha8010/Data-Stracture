
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
int data;
 struct node * next;
}NODE;
 NODE  * create(NODE *list)
 {
 NODE *temp,*newnode;
   int i,n;
   printf("\n enter limit for list .....");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("\n enter data for node.....");
     newnode=(NODE *)malloc(sizeof(NODE));
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
NODE *conc(NODE *list,NODE *list1)
{
 NODE *temp;
for(temp=list;temp->next!=NULL;temp=temp->next); 
temp->next=list1;

return list;
}


void union1(NODE *list){
NODE *temp;
for(temp=list;temp->next!=NULL;temp=temp->next){
         if(temp->data!=temp->next->data){
            printf("%d\t",temp->data);
         }
         
}
printf("%d",temp->data);
}
    

NODE *sort(NODE  *list)
{
  int t;
  NODE *temp,*temp1;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
    {
       if(temp->data>temp1->data)
       {
          t=temp->data;
          temp->data=temp1->data;
          temp1->data=t;
       }
    }
  }return list;
}



int main()
{
  NODE * list=NULL,*list1=NULL;

  list=create(list);

  list1=create(list1);
    printf("\n create list is......");
  disp(list);
  printf("\n create list1 is...");
  disp(list1);
  printf("\n concat list is .......\n ");
  list= conc(list,list1);
  disp(list);

printf("\n sorted list is......");
sort(list);
disp(list);

printf("\n union....");
 union1(list);
  
 
  return 0;
}