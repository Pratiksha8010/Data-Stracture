#include<stdio.h>
int main()
{
int i,j,r,c,a[20][20],c1=0,c2=0;
printf("enter limit2 for row....");
scanf("%d",&r);

printf("enter limit for col....");
scanf("%d",&c);

printf("enter first array element....");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
scanf("%d",&a[i][j]);

    
    if(a[i][j]%2==0){
        c1++;
    }
    else{
        c2++;
    }

    }
}


// ONLY ONE LOOP USING.........
// for(i=0;i<r;i++){
//     for(j=0;j<c;j++){
    
//     if(a[i][j]%2==0){
//         c1++;
//     }
//     else{
//         c2++;
//     }


//     }

// }
printf("sum of E num=%d sum of O num=%d",c1,c2);



return 0;
}