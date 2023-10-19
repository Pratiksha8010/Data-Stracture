#include<stdio.h>
#define max 20
struct queue
{
    int data[max];
    int front,rear;
}*q;

void init()
{

q->front=-1;
q->rear=-1;
}

int isfull()
{
 if(q->rear==max-1)
 return 1;
 else
 return 0;

}
int isempty()
{
    if(q->front==-1 || q->front> q->rear)
    return 1;
    else
    return 0;
}

void insert(int num)
{
 if(isfull())
 printf("queue is  overflow.....");
 else
 {
    if(q->front==-1)
        q->front=0;
    
    q->rear++;
    q->data[q->rear]=num;
 }
}

int del()
{
   int val;
   val=q->data[q->front];
     q->rear--;
     return val;

}

void disp()
{
  int i;
  for(i=q->front;i!=q->rear;i++){
              printf("%d",q->data[i]);
  }

      printf("%d",q->data[i]);

}
int main()
{
    int num;

    printf("-------------------------");
    init();

    printf("-------------------------");
printf("enter num..");
scanf("%d",&num);
insert(num);

printf("enter num..");
scanf("%d",&num);
insert(num);

printf("enter num..");
scanf("%d",&num);
insert(num);

printf("enter num..");
scanf("%d",&num);
insert(num);
disp();



    return 0;
}