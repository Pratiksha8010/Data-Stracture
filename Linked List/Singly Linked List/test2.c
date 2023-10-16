#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
int data;
struct node*next;
};

struct node*create(struct node*head)
{
struct node*temp,*newnode;
int i,n;
printf("enter limit...");
scanf("%d",&n);
for(i=0;i<n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("ente value...");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
head=temp=newnode;

}
else{
  temp->next=newnode;
  temp=newnode;
}

}
return head;
}
void disp(struct node *head)
{
struct node *temp;
for(temp=head;temp!=NULL;temp=temp->next){
printf("%d ",temp->data);
}

}

struct node* insertbeg  (struct node* head,int num)
{
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;

newnode->next=head;
head=newnode;
return head;

}

struct node*insertend(struct node*head,int num)
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
for (temp=head;temp->next!=NULL;temp=temp->next);
temp->next=newnode;


return head;

}






int main(){
  struct node*head=NULL;
 int ch,num;

do{
    
 printf("\n 1-create \n 2-disp \n 3-insertbeg \n 4-insertend \n enter your choice..");
 scanf("%d",&ch);
switch (ch)
{

case 1:head=create(head);
       break;
case 2:disp(head);
       break;

case 3:printf("enter number...");
       scanf("%d",&num);
       head=insertbeg(head,num);
       break;       

case 4:printf("enter number...");
       scanf("%d",&num);
       head=insertend(head,num);
       break;
       
default :printf("enter choice between 1 to 4....");

}
}while(ch <5);
return 0;
}