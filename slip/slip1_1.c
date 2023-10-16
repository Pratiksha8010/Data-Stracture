#include<stdio.h>
#include<conio.h>
#define MAX 20
struct node
{
 int data[MAX];
 int top;
}s;
void init()
{
 s.top=-1;
}
int isfull()
{
 if(s.top==MAX-1)
 return 1;
 else
 return 0;
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
 printf("\n stack is full dont push....");
 else
 s.top++;
 s.data[s.top]=num;
 printf("\n push succesfull...");
}
int  pop()
{
  int val;
 if(isempty())
 printf("stack is empty dont push...");
 else
 {
 val=s.data[s.top];
 s.top--;
printf("\npop succesfully....");
}
  return val;
 }
 void disp()
 {
  int i;
  for(i=s.top;i>=0;i--){
  printf("%d\t",s.data[i]);

  }


 }

int main()
{

 int num,val,ch;
 clrscr();
 init();
 do
 {
 printf("\n 1-push\n2-pop\n3-disp\n");
 printf("\n enter your choice...");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("enter num to push..");
 scanf("%d",&num);
 push(num);
 break;
 case 2: pop();
	  break;
case 3:  disp();

 }
 }while(ch<4);
 getch();
 return 0;

}