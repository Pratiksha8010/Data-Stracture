#include<stdio.h>
int main(){
int i,j,r,c,a[10][10],max=0;
printf("enter limit for row....");
scanf("%d",&r);
printf("enter limit for col....");
scanf("%d",&c);
printf("enter n array element...\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
}
printf("max num \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(a[i][j]>max){
            max=a[i][j];
        }
    }
}
printf("max num is....%d",max);




    return 0;
}