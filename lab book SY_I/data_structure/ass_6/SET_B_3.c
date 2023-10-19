#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
NODE *initStack(NODE *stack)
{
 stack=NULL;
 return stack;
}
int isEmpty(NODE *stack)
{
 if(stack==NULL)
 return 1;
 else
 return 0;
}
NODE *push(NODE *stack,int num)
{
 NODE *newnode;
 newnode=(NODE *)malloc(sizeof(NODE));
 newnode->data=num;
 newnode->next=stack;
 stack=newnode;
 return stack;
}
NODE *pop(NODE *stack)
{
 int num;
 NODE *temp;
 num=stack->data;
 temp=stack;
 stack=temp->next;
 free(temp);
 printf("\n The popped element is....%d",num);
 return stack;
}
void display(NODE *stack)
{
 NODE *temp=stack;
 while(temp!=NULL)
 {
 printf("\t %d",temp->data);
 temp=temp->next;
 }
}
void main()
{
 int choice,n;
 NODE *stack;
 //clrscr();
 stack=initStack(stack);
 do
 {
 printf("\n\n 1. PUSH \n 2. POP \n 3. DISPAY \n 4. EXIT");
 printf("\n--------------------------");
 printf("\n Enter your choice...");
 scanf("%d",&choice);
 switch(choice)
 {
case 1: printf("\n Enter element to push...");
scanf("%d",&n);
stack=push(stack,n);
break;
case 2: if(isEmpty(stack))
 printf("\n Stack is Empty...");
else
 stack=pop(stack);
break;
case 3: display(stack);
break;
 }
 }while(choice!=4);
 //getch();


}