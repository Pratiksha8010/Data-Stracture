#include<stdio.h>
#define max 20
 typedef struct stack
{
        char item[max];
        int top;
}STACK;

 void initStack(STACK *ps)
 {
    ps->top=-1;
 }

int isFull(STACK *ps)
{

 if(ps->top==max-1) 
 {
    return 1;
 }  
 else{
    return 0;
 }
}

 int isEmpty(STACK *ps){
   if(ps->top==-1)
   {
    return 1;
   }

   else{
    return 0;
   }
}

void pushChar(STACK *ps,char n){
if(isFull(ps)){
    printf("stack is full dont push....");

}
else{
    ps->top++;
    ps->item[ps->top]=n;
}


}

char popVal(STACK *ps)
{
 char x;
 if(isEmpty(ps)){
 printf("stack is empty dont pop....");
 }
 else{
    x=ps->item[ps->top];
    ps->top--;
 }
return x;
}


int main()
{
 int i,j=0;
 char infix[max],postfix[max],ch;
 clrscr();
 printf("enter postfix string...");
 scanf("%s",&infix);

 for(i=0;infix[i]!='\0';i++){
     switch(infix[i]){
        case 'a' :
        case 'b' :
        case 'c' :
        case 'd' :
        case 'e' :
        case 'f' :
        case 'g' :
        case 'h' :
                           postfix[j]=infix[i];
                           j++;
                           break;

       case '+':
       case '-':                    
       case '\':                    
       case '(':                    

                       push(infix[i]);
                         break;


      case ')':

        while(!isEmpty()){
                 postfix[j]=pop();
                 j++;
                 
        }
        break;
     }

 postfix[j]='\0';
 printf("\n postfix string is....%s",postfix);
 }
 }

 getch();
    return 0;
}