#include<stdio.h>
int main()
{
int  a[50],i,pass,n,t;
printf("limit for aarya.....");
scanf("%d",&n);
printf("\n number of elements....");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(pass=1;pass<n;pass++){
    for(i=0;i<n-pass;i++){
         if(a[i]>a[i+1]){
             t=a[i];
             a[i]=a[i+1];
             a[i+1]=t;

         }
    }
}
printf("\n sorted array is.....\n");
for(int k=0;k<n;k++){
printf("%d\t",a[k]);
}



    return 0;
}