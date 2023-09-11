#include<stdio.h>
int main(){
int a[100],num,l,f=0;
printf("enter limit..");
scanf("%d",&l);
printf("enter n element...");
for(int i=0;i<l;i++){
scanf("%d",&a[i]);
}

printf("enter num for search...");
scanf("%d",&num);

for(int j=0; j<l; j++){
if(a[j]==num){
f=1;
break;
}
}
if(f==1)
    printf("num is found...%d");

else

printf("num is not found...");

    return 0;
}