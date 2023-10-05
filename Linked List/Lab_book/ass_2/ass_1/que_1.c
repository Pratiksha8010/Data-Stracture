#include<stdio.h>
#include<conio.h>
int main()
{   int a[100],s1=0 ,s2=0,i,j,ch,n;
//clrscr();
printf("limit for array....");
scanf("%d",&n);
printf("\n enter elements of array......");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
 do{
   printf(" \n 1)-evan possition sum\n 2)-odd possition sum enter choice.....");
   scanf("%d",&ch);
   switch(ch){

   case 1:for(i=0;i<n;i++){
	  if(i%2==0){
	   s1=s1+a[i];

	  }

	  }
	  printf("\n sum of evan possition values.......%d",s1);
	 break;
  case 2:for(i=0;i<n;i++){
	  if(i%2==1){
	     s2=s2+a[i];
	  }
	  }
	  printf("\n sum of odd possition values..........%d",s2);
	  break;
  default:
	 printf("\n enter valid chooice that is 1 or 2.....");

   }

 }while(ch<3);
 //getch();
 return 0;
}