#include<stdio.h>
int main(){
int a[20],b[20],c[40],n1,n2,n3=n1+n2,i,j,k;


printf("enter first array element....");
scanf("%d",&n1);

printf("n array element..");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);
}

printf("enter secound array element....");
scanf("%d",&n2);

printf("n array element..");
for(j=0;j<n2;j++){
scanf("%d",&b[j]);
}

i=0;
j=0;
k=0;
while(i<n1 && j<n2){
if(a[i]<b[j])
    c[k++] = a[i++];

else
    c[k++] = b[j++];

}

while(i < n1){
    c[k++] = a[i++];
}

while( j < n2 ){
c[k++] = b[j++];

}
printf("sorted array is....\n ");
for(i=0 ;i<n3; i++){
printf("%d\t",c[i]);

}
 return 0;
}