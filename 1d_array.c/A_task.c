#include<stdio.h>
int main(){
int n,d,t=0,b=0;
printf("enter number......");
scanf("%d",&n);
while(n>0){
d=n%10;
t=d;
if(t>b){
    b=t;
}
n=n/10;

}
printf("%d",b);

   return 0;
}
