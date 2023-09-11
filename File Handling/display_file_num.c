#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *fp1;
int num;
fp1=fopen("num.txt","r");
if(fp1==NULL){
    printf("file is not found....");
    exit(0);
}
while(!feof(fp1)){
fscanf(fp1,"%d",&num);
printf("%d\t",num);

}
fclose(fp1);
}