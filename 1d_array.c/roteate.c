#include<stdio.h>
int main(){
int p[50],n,l;
printf("enter limit...");
scanf("%d",&l);
printf("\n enter n element of array...");
for(int i=0;i<l;i++){
scanf("%d",&p[i]);
}
printf("enter number for rotete...");
scanf("%d",&n);
for( int j=n;j<l;j++){
printf("%d\t ",p[j]);

}
for (int k=0;k<n;k++){
    printf("%d\t ",p[k]);
}

    return 0;
}