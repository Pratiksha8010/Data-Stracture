#include<stdio.h>
#define max 50
 struct stack
{
int  data[max];
int top;

}s;

void init()
{
 s.top=-1;  

}

int isfull()
{
    if(s.top==max-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty()
{
     if(s.top==-1) 
     return 1;

     else  
    return 0;
}

 void push(int num)
{
          if(isfull())
          printf("\n stack is full dont push..");

          else{
            s.top++;
            s.data[s.top]=num;
          }

}
void disp()
{
   int i;
   for(i=s.top;i>=0;i--){
    printf("%d\t",s.data[i]);

   }

}

int show()
{
    int i,f=0;
 for(i=s.top;i<=0;i--){
if(s.data[i]==s.data[i])
f=1;
}

return f;
}
int pop()
{
int val;
val=s.data[s.top];
s.top--;
    return val;
}

int main()
{
 int i,num,f=0,val,a[10],a1,b,c,v1,n1,m1;
init();
 printf("enter num..");
 scanf("%d",&num);
 push(num);
  printf("enter num..");
 scanf("%d",&num);
 push(num);
  printf("enter num..");
 scanf("%d",&num);
 push(num);
 disp();
 val=pop();
  a1=val;

 val=pop();
  b=val;

 val=pop();
 c=val;
 printf("\n poped val stack is.............\n");

printf("%d\t%d\t%d",a1,b,c);
printf("\n secound stack is.............\n");


 init();
   printf("\nenter num for secound stack..");
 scanf("%d",&num);
push(num);
  printf("enter num for secound stack..");
 scanf("%d",&num);
push(num);
  printf("enter num for secound stack..");
 scanf("%d",&num);
push(num);
disp();


 disp();
 val=pop();
  v1=val;

 val=pop();
  n1=val;

 val=pop();
 m1=val;

if(a1==v1)
f=1;
if(b==n1)
f=1;
if(c==m1)
f=1;

if(f==1)
printf("true");
else
printf("false");

  return 0;
}