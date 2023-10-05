#include<stdio.h>
int n,a[20];

 void mergesort(int low , int mid, int h){
  int i,j,k,t[10];
  i=low;
  j=mid+1;
  k=low;
  while(i<=mid && j<=h){
         if(a[i]<a[j])
         t[k++]=a[i++];
         else
         t[k++]=a[j++];
  }
  while(i<=mid)
        t[k++]=a[i++];
        while(j<=h)
        t[k++]=a[j++];
        for(i=low;i<h;i++){
            a[i]=t[i];
        }
  

}
 void msortdiv(int low,int h){
int mid;
if(low!=h){
    mid=(low+h)/2;
    msortdiv(low,mid);
    msortdiv(mid+1,h);
    mergesort(low,mid,h);
}
}

int main(){
int i;
printf("enter limit.....");
scanf("%d",&n);
printf("enter n elements.....");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
msortdiv(0,n-1);
printf("\n sorted num is....");
for(i=0;i<n;i++){
printf("%d",a[i]);
}

}