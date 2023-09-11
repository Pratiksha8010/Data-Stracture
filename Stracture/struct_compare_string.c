#include<stdio.h>
#include<string.h>
  struct str
  {
    char name[50];
  }s1[100];
  
  int main(){
   char name1[50];
   int n;
   printf("enter limit...");
   scanf("%d",&n);
for(int i=0;i<n;i++){
printf("enter name in struct...");
scanf("%s",&s1[i].name);
}
printf("enter name sec for compare.....");
scanf("%s",&name1);
int flag=0;
for(int k=0;k<n;k++){
if(strcmp(s1[k].name,name1)==0){
    flag=1;
    break;
}
}
if(flag==1){
printf("string is same......");
}
else
{
    printf("string is note same...");
}



    return 0;
}