#include<stdio.h>
int main(){
int a[20],l,f,r,j;
printf("enter limit=");
scanf("%d",&l);
printf("n number in array=");
for (j=0;j<l;j++){
    scanf("%d",&a[j]);
}
printf("find num for replace=");
scanf("%d",&f);
printf("replace num=");
scanf("%d",&r);
for(j=0;j<l;j++){
if(a[j]==f){
    a[j]=r;
}
}
for (j=0;j<l;j++){
printf("%d\t ",a[j]);
}
 return 0;
}