#include <stdio.h>

int main() {
    int num,c=0,n,loop;
int array[20];
printf("enter limit for array");
scanf ("%d",&n);

printf("enter array element....");
for(loop=0;loop<n;loop++){
scanf("%d",&array[loop]);
}

   
   printf("enter num for check...");
   scanf("%d",&num);

   for(loop = 0; loop < 10; loop++){
   if(array[loop]==num){
                c++;

   }
}
      printf("%d ", c);
      return 0;
}