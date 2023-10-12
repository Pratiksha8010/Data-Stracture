#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],b[100],i,j,n;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter first polinomial..");
for(i=0;i<n;i++){
    printf("\n give me coeficient..of x^%d=",i);
  scanf("%d",&a[i]);
  
}
printf("\n display .....\n");

for(i=0;i<n;i++){
    printf("%dx^%d+",a[i],i);
}


//getch();
return 0;
}