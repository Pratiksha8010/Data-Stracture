#include<stdio.h>
int main(){
 FILE *n1;
 char name[50];
 n1=fopen("name.txt","r");
 if(n1==NULL){
   printf("file not found......");
   exit(0);
 }
 while(!feof(n1)){
    fscanf(n1,"%s",&name);
    printf("%s\t",name);
 }

fclose(n1);

    return 0;
}