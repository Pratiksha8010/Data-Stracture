#include<stdio.h>
int main(){
int a[100],n,num,i,flag=0;
printf("Enter limit...");
scanf("%d",&n);
printf("Enter number in an array... ");
for ( i=0;i<n;i++){
    scanf("%d",&a[i]);

}
printf("Enter number for searching....");
scanf("%d",&num);
for(i=0;i<n;i++){
if(a[i]==num){
flag=1;
}
}
if(flag==1){
    printf("Number is found...");
}
else{

    printf("Number is not found....");
}

return 0;
}
