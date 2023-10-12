#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}STACK;
STACK *top;

void init()
{
    top=NULL;
}

int isEmpty()
{
    if(top==NULL)
    return 1;
    else 
    return 0;
}

void pushVal(int num){
    STACK *newnode;
    newnode=(STACK*)malloc(sizeof(STACK));
    newnode->data=num;
    newnode->next=top;
    top=newnode;
}
void popVal()
{
    int val;
    STACK *temp;
    if(isEmpty()){
        printf("\n stack is empty dont pop...");
    }
    else{
        temp=top;
        val=top->data;
        top=top->next;
        free(top);
    
    }
  
}
void disp()
{
    STACK *temp;
    for(temp=top;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}

int main()
{

  int ch,num,val;

  do
  {
    printf("\n1-push\n2-pop\n3-disp\n enter your choice.....");
    scanf("%d",&ch);
    switch(ch){
case 1:printf("\n enter num to push...");
       scanf("%d",&num);
       pushVal(num);
       break;
case 2:popVal(); 
    
    break; 

 case 3:disp();
    }
  }while(ch!=4);

    return 0;
}
