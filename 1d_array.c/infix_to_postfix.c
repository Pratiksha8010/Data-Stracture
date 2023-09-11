#include<stdio.h>
#include<ctype.h>
#define max 100
struct stack
{
 char a[max];
 int top;
}s;

void init(){
    s.top=-1;
}
int isempty(){
if(s.top==-1)
     return 1;
else
    return 0;

}
int isfull(){
    if(s.top==max-1)
    return 1;
    else
    return 0;
}
void push(char x){
    if(isfull())
    printf("stack is full dont push...");

else {
 s.top++;
 s.a[s.top]=x;
}
}
char pop(){
     char ch;
    if(isempty())
    printf("stack is empty dont pop..");
    else{
       ch=s.a[s.top];
       s.top--;
       return ch;
    }
}
int priority (char x){
if(x=='(')
return 0;
if(x=='+'||x=='-')
return 1;
if(x=='*'||x=='/')
return 2;
return 0;
}
int main(){
char exp[100];
char *e,x;
printf("enter infix expression...");
scanf("%s",exp);
printf("\n");
e=exp;
while(*e!='\0'){
if(isalnum (*e))
printf("%c",*e);
else if(*e=='(')
push (*e);
else if(*e==')')
{
    while((x=pop())!='(')
   printf("%c",x);
}
else{
    while(priority(s.a[s.top])>=priority(*e))
    printf("%c",pop());
    push(*e);
}
e++;
}
while(!isempty()){
    printf("%c",pop());
}

}