#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],c=0,i,n,key;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  
}
printf("enter key to search...");
scanf("%d",&key);
for(i=0;i<n;i++){
if(a[i]==key){
    c++;
}
}

printf("key=%d repeted is %d time..",key,c);


return 0;

}