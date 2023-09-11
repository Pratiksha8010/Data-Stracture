#include<stdio.h>
int main()
{
 int a[20][20], i,j,r,c,sum=0;
printf("enter limit for row....");
scanf("%d",&r);

printf("enter limit for col....");
scanf("%d",&c);
printf("enter array element....");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
sum=sum+a[i][j];
    }

}
printf("sum of matrix...%d",sum);
    return 0;
}