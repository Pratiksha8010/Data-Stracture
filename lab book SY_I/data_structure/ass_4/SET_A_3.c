#include<stdio.h>
#include<string.h>
int main()
{
 int n,i,f=0;
 char a[20][20],name[20];
 printf("enter limit..");
 scanf("%d",&n);
 printf("enter n name t in array..");
 for(i=0;i<n;i++){
    scanf("%s",&a[i]);
 }
printf("enter name to serach...");
scanf("%s",&name);
int top=0,bottom=n-1,mid;
while(top<=bottom){

    mid=(top+bottom)/2;
    if(strcmp(a[mid],name)==0){
        f=1;
        break;
    }
    if(strcmp(a[mid],name)<0){
       top=mid+1;
    }
    else if(strcmp(a[mid],name)>0){
       
         bottom=mid-1;
    }
    
}
if(f==1)
printf("found..");
else
printf("not found..");

return 0;
}