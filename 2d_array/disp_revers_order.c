#include<stdio.h>
int main()
{
int i,j,r,c,a[20][20],c1=0,c2=0;
// scanf("%d",&c);
// for(i=0;i<c;i++){
//     scanf("%d",&a[i]);
// }
// for(i=c-1;i>=0;i--){
//     printf("%d",a[i]);
// }

printf("enter limit for row....");
scanf("%d",&r);

printf("enter limit for col....");
scanf("%d",&c);

printf("enter first array element....");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
scanf("%d",&a[i][j]);

    }
}
printf("display in reverce....\n");
for(i=r-1;i>=0;i--){
    for(j=c-1;j>=0;j--){
printf("%d",a[i][j]);

    }
    printf("\n");
}

return 0;
}

