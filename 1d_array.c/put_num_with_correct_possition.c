// #include<stdio.h>
// int main(){
// int a[100],n,num,i,f=0,j,c,t,c1;
// printf("Enter limit...");
// scanf("%d",&n);
// printf("Enter number in an array... ");
// for ( i=0;i<n;i++){
//     scanf("%d",&a[i]);

// }
// printf("\n etnter num to insert.....");
// scanf("%d",&num);
// for(j=0;j<n;j++){
// for(i=0;i<n;i++){
//     if(a[i]>num && a[i+1]>num){
//        c1=i-1;
//         a[i-1]=num;
//        t= a[i-1];

//         f=1;
//         break;
//     }
//   if(f==1)
//   break;
// }

//   if(f==1)
//   break;
// }

// printf("%d old values pos..");
//  printf("%d",c1+1);
//  //printf("\t%d",t);
// // printf("\n%d",t);

// printf("\n-----------------------------\n");
// for (i=0;i<=c1;i++){
//     printf("%d",a[i]);

// }
// // for(j=t;j<n;j++){
// // printf("%d",a[i]);
// // }

// return 0;
// }

#include <stdio.h>
int main()
{
  int a[100], n, num, i, f = 0, j, c, t, c1;
  printf("Enter limit...");
  scanf("%d", &n);
  printf("Enter number in an array... ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("\n etnter num to insert.....");
  scanf("%d", &num);
  for (i = 0; i < n; i++)
  {
    if (a[i] < num && a[i + 1] > num)
    {
      printf("%d", a[i]);
      printf("%d", num);
    }
    else
    {
      printf("%d", a[i]);
    }
  }

  return 0;
}