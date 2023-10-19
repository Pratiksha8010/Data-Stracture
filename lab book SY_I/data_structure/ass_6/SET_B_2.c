#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 30
typedef struct stack
{
int top;
int item[MAX];
}STACK;
void initstack(STACK *ps)
{
ps->top=-1;
}
int isEmpty(STACK *ps)
{
if(ps->top==-1)
 return 1;
else
 return 0;
}
int isFull(STACK *ps)
{
if(ps->top==MAX-1)
 return 1;
else
 return 0;
}
void push(STACK *ps,int n)
{
 if(isFull(ps))
 printf("\n Stack Is Full");
 else
 {
 ps->top++;
 ps->item[ps->top]=n;
 }
}
int pop(STACK *ps)
{
if(isEmpty(ps))
{
 printf("\n Stack Is Empty:");
}
else
{
 int x;
 x=ps->item[ps->top];
 ps->top--;
 return x;
}
}
int evalpost(char p[])
{
int result,i,op2,op1;
STACK s;
i=0;
while(i<strlen(p))
{
 switch(p[i])
 {
 case '0':push(&s,0);
 break;
 case '1':push(&s,1);
 break;
 case '2':push(&s,2);
 break;
 case '3':push(&s,3);
 break;
 case '4':push(&s,4);
 break;
 case '5':push(&s,5);
 break;
 case '6':push(&s,6);
 break;
 case '7':push(&s,7);
 break;
 case '8':push(&s,8);
 break;
 case '9':push(&s,9);
 break;
 case '+':op2=pop(&s);
 op1=pop(&s);
 result=op1+op2;
 push(&s,result);
 break;
 case '-':op2=pop(&s);
 op1=pop(&s);
 result=op1-op2;
 push(&s,result);
 break;
 case '*':op2=pop(&s);
 op1=pop(&s);
 result=op1*op2;
 push(&s,result);
 break;
 case '/':op2=pop(&s);
 op1=pop(&s);
 result=op1/op2;
 push(&s,result);
 break;
 }//eof switch
 i++;
 }//eof while
return result;
}//eof fun
void main()
{
int result;
char p[20];
//clrscr();
printf("\n Enter The Postfix String:");
scanf("%s",p);
result = evalpost(p);
printf("\n\tResult Of Postfix String Evaluation :%d",result);
//getch();
}
