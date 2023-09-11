/*
///////////////////error//////////////////////
#include<stdio.h>
int main(){
int array[20],n,num,loop,sum;
printf("enter limit...");
scanf("%d",&n);

printf("enter number in an array... ");
for(loop=0;loop<n;loop++){
scanf("%d",&array[loop]);
}

for(loop=0;loop<n;loop=loop+2){
sum=sum+array[loop];
}
printf("array",sum);
return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int num,n,loop,sum=0,sum2=0;
int array[20];
printf("enter limit for array");
scanf ("%d",&n);

printf("enter array element....");
for(loop=0;loop<n;loop++){
scanf("%d",&array[loop]);
if(loop%2==0){
sum = sum + array[loop];
}
if(loop%2!=0){
    sum2 = sum2+array[loop];
}
}
      printf("%d ", sum);
      printf("%d", sum2);
return 0;
}
*/
#include <stdio.h>

int main() {
    int num,n,loop,sum2=0,ch,sum=0;
int array[20];
printf("enter limit for array");
scanf ("%d",&n);

printf("enter array element....");
for(loop=0;loop<n;loop++){
scanf("%d",&array[loop]);
}
do{
     sum=0;
printf("\n 1-even index element sum  \n 2-even idex element sum \n enter choice.....");
scanf("%d",ch);

switch(ch){
    case 1:
          for(loop = 0;loop < n; loop ++)
           if(loop %2 == 0)
           sum = sum + array[loop];
           
          
           printf(" even sum....%d ", sum);
           break;

    case 2:
            for(loop = 0;loop < n;loop ++)
            if(loop % 2!= 0)
             sum2 = sum2 + array[loop];
            
    
            printf("odd sum...%d", sum2);
            break;

 default:("enter correct choice....");

}
} while(ch <3);

return 0;
}

