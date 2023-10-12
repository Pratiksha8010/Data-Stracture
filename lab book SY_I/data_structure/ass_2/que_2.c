#include<stdio.h>
int main()
{
    //u need to add rand()

int  a[50],i,j,n,t,p;
printf("limit for aarya.....");
scanf("%d",&n);
printf("\n number of elements....");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(j=1;j<n;j++){
          t=a[j];
    for( p=j-1;p>=0 && t<a[p];p--){
         a[p+1]=a[p];

         }
         a[p+1]=t;
    }

printf("\n sorted array is.....\n");
for(int k=0;k<n;k++){
printf("%d\t",a[k]);

}
    return 0;
}