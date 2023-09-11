#include<stdio.h>
int main(){
int a[20],b[20],i,n,j;
printf("\n enter limit=");
scanf("%d",&n);

printf("\n enter n element=");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
     b[i]=a[i];
}
for(i=0;i<n;i++){
printf("%d\t",b[i]);
}
 return 0;
}