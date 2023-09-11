#include<stdio.h>
int main(){
struct emp{
int eno;
char name;
int sal;
}e[100],t;
int i,n,j;
printf("enter limit...");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("eno name sal");
    scanf("%d %s %d");
}
for(i=0;i<n;i++){
  scanf("%d %s %d",e[i].eno,e[i].name,e[i].sal);
  }
for (i=1;j<n;j++){
    for (i=0;i<n;i++){
        if(e[i].sal< e[i+1].sal){
           t=e[i];
           e[i]=e[i+1];
           e[i+1]=t;
        }
    }
}
printf("sorted record...");
for(i=0;i<n;i++){
scanf("%d %s %d",e[i].eno,e[i].name,e[i].sal);
}


    return 0;
}