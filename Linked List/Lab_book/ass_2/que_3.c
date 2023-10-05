//SELECTION SORT
#include<stdio.h>
int main()
{
int a[100],n,i,j,temp1,temp2;
printf("limit for array....");
scanf("%d",&n);
printf("elements .....");
for(i=0;i<n;i++){   
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){

temp1=a[i];

for(j=i+1;j<n;j++){
if(a[j]<temp1)
    temp2=temp1;
    temp1=a[j];
    a[j]=temp2;

}

a[i]=temp1;
}

printf("sorted array is......");
for(int o=0;o<n;o++){
    printf("%d \t",a[o]);
}
    return 0;
}
