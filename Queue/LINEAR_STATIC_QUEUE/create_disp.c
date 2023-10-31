#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*rear,*temp,*front,*newnode;

void init()
{
    rear=front=NULL;
}

int empty()
{
    if(front==NULL)
    return 1;
    else
    return 0;
}

void insert(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(front==NULL){
        rear=front=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        printf("\ninsert succ...");
    }
}

void del()
{ int val;
    if(empty()){
           printf("\n queue is empty...");
    }
    else{
        
 temp=front;
front=front->next;
free(temp);
printf("\n delete succe...");
}
}

void disp()
{
    for(temp=front;temp!=NULL;temp=temp->next){
        printf("%d\t",temp->data);
    }
}

int main()
{
int ch,num;
do
{
    printf("\n 1-insert\n2-delete\n3-disp\n enter choice...");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("enter num to insert...");
                  scanf("%d",&num);
                  insert(num);
                  break;
        case 2: del();
                break;
        case 3: disp();        
    }
 
}while(ch<4);

    return 0;
}