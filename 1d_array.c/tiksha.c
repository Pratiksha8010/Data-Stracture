#include<stdio.h>
int main(){
int a[100],n,num,i,j,c=0,sum,f=0,s=0,in1,in2;
printf("enter limit of an array......");
scanf("%d",&n);

printf("\n enter array element.....");
for ( i=0;i<n;i++){
    scanf("%d",&a[i]);
    c++;
}
printf("enter sum..");
scanf("%d",&sum);

for(j=0;j<c;j++){
    for(i=0;i<n;i++){
        if(a[i]+a[i+1]==sum){
            printf("%d %d",i,i+1);
            s=a[i]+a[i+1];
            in1=a[i];
            in2=a[i+1];
            f=1;
            break;

         
        }

    
        if(f==1){
            break;
        }
    }
    if(f==1){
        break;
    }
}





return 0;
}