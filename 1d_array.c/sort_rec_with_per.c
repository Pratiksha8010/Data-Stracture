#include<stdio.h>
int main(){

struct student
{
int rno;
char name[20];
int per;
}s1[100],t;

int i,pass,n;
printf("enter limit...");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf(" rno name per \n");

scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
}
for(pass=1;pass<n;pass++){
    for(i=0;i<n-pass;i++){
      if(s1[i].per < s1[i+1].per){
         t=s1[i];
         s1[i]=s1[i+1];
         s1[i+1]=t;
      } 
    }
}
printf(" sorted rec of student... \n");
for (i=0;i<n;i++){
printf("%d\t  %s\t  %d \t ",s1[i].rno,s1[i].name,s1[i].per);
}
   return 0;
}
