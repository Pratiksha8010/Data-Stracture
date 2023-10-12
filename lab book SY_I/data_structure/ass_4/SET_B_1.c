#include<stdio.h>
#include<string.h>
int main()
{
 int n,i,f=0;
 char a[20][20],num[20];
 printf("enter limit..");
 scanf("%d",&n);
 printf("enter n name in array..");
 for(i=0;i<n;i++)
 scanf("%s",&a[i]);
printf("enter name to serach...");
scanf("%s",&num);
for(int j=0;j<n;j++){
if(strcmp(a[j],num)==0){
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