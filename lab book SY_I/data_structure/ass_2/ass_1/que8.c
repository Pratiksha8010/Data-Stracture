#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],b[100],i,j,n,key,num;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  
}


printf("\n enter possition to value change in array......");
scanf("%d",&key);
printf("\n enter num to replace  with possition in array......");
scanf("%d",&num);

for(i=0;i<n;i++){
    if(i=key){
     a[i]=num;
}

printf("replesed  array is....\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}

}
//getch();
return 0;
}