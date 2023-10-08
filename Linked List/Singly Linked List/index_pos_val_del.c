
#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n,a[20],p,p1;
printf("limit..");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter first possition to remove....");
scanf("%d",&p);
printf("\n enter secound possition to remove....");
scanf("%d",&p1);
for(int j=0;j<n;j++)
{
    if(j==p || j==p1){
      continue;

    }
    else{
     printf("%d\t",a[j]);


}

return 0;
}