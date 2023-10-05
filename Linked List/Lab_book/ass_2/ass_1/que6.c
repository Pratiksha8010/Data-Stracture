#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],b[100],i,j,n;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  
}
for(i=0;i<n;i++){
    b[i]=a[i];
}

printf("first array is....\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}

printf("\n secound array is....\n");
for(i=0;i<n;i++){
    printf("%d\t",b[i]);
}
//getch();
return 0;
}