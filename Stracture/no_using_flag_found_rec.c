#include<stdio.h>
#include<string.h>
struct stud
{
    int rno;
    char name[20];
    float per;
    char sclass[20];
}p1[100];

int main()
{
int n,e;
char c[20];
printf("enter limit for records.....");
scanf("%d",&n);
printf("enter n records.....\n ");
for(e=0;e<n;e++){
printf("rno name per sclass");
scanf("%d %s %f %s",&p1[e].rno,&p1[e].name,&p1[e].per,&p1[e].sclass);
}
printf("\n enter name for search rec.....");
scanf("%s",&c);
for(e=0;e<n;e++){
if(strcmp(p1[e].name,c)==0){
  printf("recourd is found.....\n");  
printf("\n rno=%d",p1[e].rno);
printf("\n name=%s",p1[e].name);
printf("\n per=%.2f",p1[e].per);
printf("\n sclass=%s",p1[e].sclass);
break;
}
}
if(e==n){
    printf("rec is not found.....");
}

  return 0;
}
