#include<stdio.h>
#define max 20
struct stack
{
 int data[max];
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
     int val;
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

void pushVal(int num)
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
  int ch,num,val;
  init();
  do{
  printf("\n1-push\n2-pop\n3-disp\n enter your choice....");
  scanf("%d",&ch);
  switch(ch){
case 1:printf("enter number...");
scanf("%d",&num);
pushVal(num);
break;
case 2: val=popVal();
if(isEmpty()){
    printf("stack is empty...");
}
else{
printf("\n poped value is...%d",val);
}
break;
case 3:dispStack();
break;
  }
  }while(ch<4);

    return 0;
}
