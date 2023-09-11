#include<stdio.h>
int main(){
int a[20],i,j,t=0,n;
printf("enter limit....");
scanf("%d",&n);

printf("enter n element in array...");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
      if(a[j]>a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }


    }
}
printf("sorte array...\n");
for(i=0;i<n;i++){
printf("%d \t",a[i]);

}
   return 0;
}