#include<stdio.h>
int main(){
int l,num,c=0;
printf("enter limit...");
scanf("%d",&l);
printf("Enter num for factors....");
scanf("%d",&num);
for(int i=1;i<=l;i++){
if(num%i==0){
    c++;
    printf("%d\t ",i);
}
}
printf("all factors is...%d",c);
    return 0;
}