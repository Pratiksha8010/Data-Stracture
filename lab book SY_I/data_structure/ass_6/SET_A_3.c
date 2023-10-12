#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    char data;
    struct node *next;
}STACK;
STACK *top;

void init()
{
    top=NULL;
}



void push(char ch){
    STACK *newnode;
    newnode=(STACK*)malloc(sizeof(STACK));
    newnode->data=ch;
    newnode->next=top;
    top=newnode;
}

  

void disp()
{
    STACK *temp;
    for(temp=top;temp!=NULL;temp=temp->next)
    {
        printf("%c\t",temp->data);
    }
}

int main()
{
 int j;
 char s1[20];
 
 printf("enter string...");
scanf("%s",&s1);
for(j=0;s1[j]!='\0';j++){
    push(s1[j]);

}
disp();
  

    return 0;
}
