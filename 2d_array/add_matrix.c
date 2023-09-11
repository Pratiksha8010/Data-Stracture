#include<stdio.h>
int main()
{
int i,j,r,c,a[20][20],b[20][20],add[20][20];
printf("enter limit for row....");
scanf("%d",&r);

printf("enter limit for col....");
scanf("%d",&c);
printf("enter first array element....");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
scanf("%d %d",&a[i][j],&b[i][j]);
    }

}
// printf("\n secound array element...");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//        scanf("%d",&b[i][j]);
//     }
    
// }

printf("addition of two matrix....\n ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
add[i][j]=a[i][j]+b[i][j];
printf("%d ",add[i][j]);

    }
    printf("\n");
    
}


    return 0;
}










// #include<stdio.h>
// #include<conio.h>
// int main(){
// int a[10][10],b[10][10],i,j,r,c,ans[10][10];
// printf ("enter row and column......");
// scanf("%d%d",&r,&c);
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         scanf("%d",&a[i][j]);
//     }
// }
// printf ("enter secound matrix.......");
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
//         scanf("%d",&b[i][j]);
//     }
// }
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
      
//       ans[i][j]=a[i][j]+b[i][j];
//     }
// }
// printf ("\n addition of matrix.......\n");
// for (i=0;i<r;i++){
//     for (j=0;j<r;j++){
//         printf ("%d\t",ans[i][j]);
//     }
//     printf ("\n");
// }
//     return 0;
// }

