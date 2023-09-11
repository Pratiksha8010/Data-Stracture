// #include<stdio.h>
// int main(){
// int a[20],i,n;
// printf("enter limit...");
// scanf("%d",&n);
// printf("enter n array element...");
// for(i=0;i<n;i++){
// scanf("%d",&a[i]);
// }
// int m=n/2;

// for(int k=0;k<n/2;k++)
// for(int h=n/2;h<n;h++)

// if(k%2==0 && h%2==0){
// printf("%d \t %d\t ",a[k],a[h]);
// }
// else{
// printf("%d \t %d\t",a[k],a[h]);

// }

//    return 0;
// }


#include<stdio.h>
int main(){
int a[20],i,n;
printf("enter limit...");
scanf("%d",&n);
printf("enter n array element...");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int p=0;p<n/2;p++)
printf("%d\t %d\t",a[p],a[n/2 + p]);
// for(int p=0;p<n;p++)
// printf("%d\t %d\t",a[p],a[n/2]);
   return 0;
}