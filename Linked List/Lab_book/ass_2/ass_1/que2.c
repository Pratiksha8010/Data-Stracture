#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],max=0,max1=0,i,j,n,l;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
for(j=0;j<n;j++){
for(i=0;i<n;i++){
if(a[i]>max){
    max=a[i];
   
} 
}
}
for(i=0;i<n;i++){
if(max==a[i]){
    a[i]=0;
}
}


for(int k=0;k<n;k++){
for(int p=0;p<n;p++){
if(a[p]>max1){
    max1=a[p];
    
}
}
}
printf("largest sum of pair is...%d ant that numbers is %d and %d",max+max1,max,max1);




return 0;
}