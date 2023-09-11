#include<stdio.h>
int main(){
int a[100],i,n,max=0,max1=0,sum=0;
printf("enter limit");
scanf("%d",&n);

printf("n element");
for(i = 0; i < n ; i++){
scanf("%d",&a[i]);
}
 for(i = 0; i < n; i++){
if(a[i]>max){
    max=a[i];  
}
 }
printf(" \n first max num is %d",max);
for(i=0;i<n;i++){
if(max==a[i]){
    a[i]=0;
}
}
for(i=0;i<n;i++){
if(a[i]>max1){
    max1=a[i];
}
}
printf("\n secound max num %d",max1);
sum=max+max1;
printf("\n sum=%d",sum);
return 0;
}
