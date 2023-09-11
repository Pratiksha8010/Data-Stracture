#include<stdio.h>
int main(){
int a[100],n,i,sum=0,ch;
printf("enter limit");
scanf("%d",&n);

printf("enter array element");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i=i+2){
    sum=sum+a[i];
}
printf("sum of even index...",sum);


return 0;
}
