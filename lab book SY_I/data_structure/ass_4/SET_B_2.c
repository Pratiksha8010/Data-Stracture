#include<stdio.h>
int main()
{
 int n,i,a[20],f=0,num;
 printf("enter limit..");
 scanf("%d",&n);
 printf("enter n element in array..");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("enter num to serach...");
scanf("%d",&num);
int top=0,bottom=n-1,mid;
while(top<=bottom){

    mid=(top+bottom)/2;
    if(a[mid]==num){
        f=1;
        break;
    }
    if(a[mid]<num){
       top=mid+1;
    }
    else if(a[mid]>num){
       
         bottom=mid-1;
    }
    
}
if(f==1)
printf("found..");
else
printf("not found..");

return 0;
}