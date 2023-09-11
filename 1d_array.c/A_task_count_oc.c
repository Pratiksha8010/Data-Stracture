#include<stdio.h>
int main(){
int a[100],c=0,n,num;
printf("enter limit of an array......");
scanf("%d",&n);
printf("\n enter array element.....");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter num for searching....");
scanf("%d",&num);
for (int i=0;i<n;i++){
if(a[i]==num){
    c++;
}

}
printf("count num repeted....%d",c);
  return 0;
}