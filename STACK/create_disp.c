#include<stdio.h>
#define MAX 5
struct stack{
    int data[MAX];
    int top;
}s;
void init()
{
    s.top=-1;
}
int isfull(){
    if(s.top==MAX-1){
      return 1;

    }
    else{
        return 0;
    }

}
int isempty()
{
    if(s.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int num)
{
if(isfull()){
    printf("\n stack is full dont push....");
}
else{
    s.top++;
    s.data[s.top]=num;
    printf("\n push succ....");
}
}
void pop()
{
int val;
if(isempty())
{
printf("\n stack is empty dont pop...");
}
else{
    val=s.data[s.top];
    s.top--;
    printf("\n po succ....");
}

}
void disp()
{
    int i;
    for (i=s.top;i>=0;i--){
         printf("%d\t",s.data[i]);
    }
}

int main(){
int ch,num;
init();

do
{
printf("\n1-push \n2-pop \n 3-disp");
printf("\n enter your choice.....");
scanf("%d",&ch);
switch(ch){
case 1:
         printf("\n enter number..");
         scanf("%d",&num);
         push(num);
        break;
case 2:
         pop();
         break;
case 3:
        disp();
        break;         

}

}while(ch<4);

    return 0;
}