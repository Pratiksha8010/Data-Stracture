
/*
#include<stdio.h>
int main(){
int n1,n2;
printf("enter first  num....");
scanf("%d",&n1);

printf("enter sce  num....");
scanf("%d",&n2);
if(n1<n2){
for (int i=n1;i<=n2;i++){
    if(i%2!=0){
        printf("%d\t ",i);
    }
}

else {
for (int i=n2;i>=n1;i--){
    if(i%2!=0){
        printf("%d\t ",i);
    }
}

}
 return 0;
 }

 */
#include<stdio.h>
int main(){
int n1,n2;
printf("enter first  num....");
scanf("%d",&n1);

printf("enter sce  num....");
scanf("%d",&n2);

if(n1<n2){
    for(int i=n1;i<=n2;i++){
        if(i%2!=0){
            printf("%d\t",i);
}
    }
}
 if(n2>n1) {
for(int j=n2;j>=n1;j--){
    if(j%2==1){
       printf ("%d\t",j);
    
}
}
 }

 else{
    printf("plz correct input......");
 }

return 0;
}

