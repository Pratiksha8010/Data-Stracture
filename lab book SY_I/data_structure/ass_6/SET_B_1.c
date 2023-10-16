#include<stdio.h>
#define max 20
struct stack
{
 char data[max];
 int top;

}s;

 void init()
 {
    s.top=-1;
 }

 int isEmpty()
 {
    if(s.top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
 }





 int isFull()
 {
    if(s.top==max-1){
        return 1;
    }
    else{
        return 0;
    }
 }
 int popVal()
 {
     char val;
 if(isEmpty()){
    printf("\n stack is empty dont pop....");
 }
 else{
    val=s.data[s.top];
    s.top--;
 }
return val;
 }

void dispStack()
{
 int i;
 for(i=s.top;i>=0;i--)
 {
printf("%d\t",s.data[i]);
 }

}

void pushVal(char num)
{
 if(isFull()){
    printf("stack is full dont push....");
 }
 else{
    s.top++;
    s.data[s.top]=num;
 }


}
int main()
{
  char s1[50], num;
    int i;
  init();
  printf("enter string...");
  scanf("%s",&s1);
 for(i=0;s1[i]!='\0';i++){
    pushVal(s1[i]);
 }

 for(i=0;s1[i]!='\0';i++){
    if(s1[i]!=popVal()){
        break;
    }

 }

if(isEmpty()){
    printf("string is palindrome...");

}
else{
    printf("string is not palindrome..");
}


    return 0;
}
