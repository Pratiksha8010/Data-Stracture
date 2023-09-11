// #include<stdio.h>
// int main(){
// int i,j,r,c,a[10][10];
// printf("enter limit for row....");
// scanf("%d",&r);
// printf("enter limit for col....");
// scanf("%d",&c);
// printf("enter n array element...\n");
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++){
//       scanf("%d",&a[i][j]);
//     }
// }
// printf("last digit....");
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++);
    
// }
//       printf("%d",a[r-1][c-1]);


// return 0;
// }


// printf("enter limit for col....");
// scanf("%d",&c);
// printf("enter n array element...\n");

// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++){
//       scanf("%d",&a[i][j]);
//     }
// }
// printf("last digit....");
// for(i=r-2;i<r;i++)
// {
//     for(j=c-2;j<c;j++)
    

//       printf("%d",a[i][j]);
// }
// return 0;
// }


 /*new logic (we can print only (n-1))*/

#include<stdio.h>
int main(){
int i,j,r,c,a[100];
printf("enter limit for row....");
scanf("%d",&r);
for(i=0;i<r;i++){
scanf("%d",&a[i]);
}
for(j=r-1;j<r;j++){

printf("%d",a[j]);
}
return 0;
}