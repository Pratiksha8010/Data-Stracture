#include<string.h>
#include<stdio.h>
int main(){
 int i,j,pass,n,k,a[30],t,c=0,c1=0;
 
 //clrscr();
printf("enter limit to array.....");
scanf("%d",&n);

printf("n name in array.......");
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
}
for(pass=1;pass<n;pass++){
   for(j=0;j<n-pass;j++){
         if (a[j]>a[j+1]){
           c1++; 
	   t=a[j];
	    a[j]=a[j+1];
	    a[j+1]=t;
         c++;   
         }
   }
}
printf(" sorted array is.....");
for(i=0;i<n;i++){
   printf("%d",a[i]);
}
printf("swap cound is....%d",c1);
printf("\n swap cound is....%d",c);
return 0;

}