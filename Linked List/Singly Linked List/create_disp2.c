#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


struct node*create(struct node*head){
int n,i;
struct node*temp,*newnode;
printf("enter limit.....");
scanf("%d",&n);

for(i=0;i<n;i++){
newnode=(struct node*) malloc(sizeof(struct node));
printf("enter element...");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head==NULL){
head=newnode;
temp=newnode;
}
else{

    temp->next=newnode;
    temp=newnode;
}
}
return head;
}

struct node*ibeg(struct node*head,int num)
{
struct node*newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=head;
head=newnode;



return head;
}

 void disp(struct node*head){
struct node*temp,*newnode;

for(temp=head;temp!=NULL;temp=temp->next){
printf("%d\t",temp->data);
}

}
struct node*iend(struct node*head,int num1)
{
struct node*temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num1;
newnode->next=NULL;
for(temp=head;temp!=NULL;temp=temp->next){
temp->next=newnode;
}
return head;
}

int main()
{
    int num,num1;
    struct node*head=NULL;
  head=create(head);
  disp(head);
  printf("\n enter num to intsert....\n");
  scanf("%d",&num);
  head=ibeg(head,num);
  disp(head);
  printf("\n printf enter num to end insert......\n");
  scanf("%d",num1);
  head=iend(head,num1);
    disp(head);
}

