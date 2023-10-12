#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main(){
 int i,j,pass,n,k;
 char a[20][20],t[10];
 //clrscr();
printf(" limit to array.....");
scanf("%d",&n);

printf("n name in array.......");
for(i=0;i<n;i++){
 scanf("%s",&a[i]);
}
for(pass=1;pass<n;pass++){
   for(j=0;j<n-pass;j++){
         if (strcmp(a[j],a[j+1])>0){

	   strcpy(t,a[j]);
	    strcpy(a[j],a[j+1]);
	    strcpy(a[j+1],t);
            
         }
   }
}
for(i=0;i<n;i++){
   printf("%s",a[i]);
}
return 0;

}