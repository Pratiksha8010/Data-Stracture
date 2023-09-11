#include<stdio.h>
#include<string.h>
int main(){
int a,n,b;
char p[20][20],t[20];
printf("enter limit...");
scanf("%d",&n);

printf("\n enter name...");
for(a=0;a<n;a++){
scanf("%s",p[a]);
}
for(b=1;b<n;b++){
   for(a=0;a<n-b;a++){
        if(strcmp(p[a],p[a+1])>0){
             strcpy (t,p[a]);
              strcpy(p[a],p[a+1]);
            strcpy(p[a+1],t);
}
}

}
printf("sorted name....\n");
for(a=0;a<n;a++){
printf("%s \t",p[a]);
}
  return 0;
}