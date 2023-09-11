#include<stdio.h>
int main(){
int i,j,r,c,a[20][20];
printf("enter limit for row...");
scanf("%d",&r);

printf("\n enter limit for col...");
scanf("%d",&c);
printf("enter n array element...");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
    }
    
}
printf("matrix is...\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++){
    printf("%d ",a[i][j]);
    }
    printf("\n");
}

    return 0;
}