#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],max=0,max1=0,i,j,n,l;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}

for(i=0;i<n;i++);
printf("the median is......%d",a[n/2]);
//getch();
return 0;
}