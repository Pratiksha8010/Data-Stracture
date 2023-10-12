#include<stdio.h>
int main()
{
 int n,i,a[20],f=0,num;
 printf("enter limit..");
 scanf("%d",&n);
 printf("enter n element in array..");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("enter num to serach...");
scanf("%d",&num);
for(int j=0;j<n;j++){
if(a[j]==num){
    f=1;
    break;
}
}
if(f==1){
    printf("found..");
}
else{
    printf("not found..");
}
    return 0;
}