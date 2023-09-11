#include<stdio.h>
int main()
{
int n,num,a[100],j;
printf("enter limit.....");
scanf("%d",&n);
printf("enter n elements..");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter num for search....\n");
scanf("%d",&num);
for( j=0;j<n;j++){
if(a[j]==num){
printf("num is found....");
break;

}
}

if(j==n){
    printf("num is not found...");
}

    return 0;
}