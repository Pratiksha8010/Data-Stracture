#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node *create(struct node*head){
struct node*newnode,*temp;
int i,n;
printf("enter limit...");
scanf("%d",&n);
for(i=0;i<n;i++){
 newnode=(struct node*)malloc(sizeof (struct node));
printf("enter values....");
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
void disp(struct node*head){
int j;
struct node*temp,*newnode;
for(temp=head;temp!=NULL;temp=temp->next){
printf("%d\t",temp->data);
}
}
int main(){

 struct node*head=NULL;
 head=create(head);
        disp(head);
    return 0;
}






    