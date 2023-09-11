#include<stdio.h>
#include<string.h>
struct binary
{
    char name[20];

}b1[100];

int main(){
char mystr[20];
int l;
printf("enter limit to strings....");
scanf("%d",&l);
for(int p=0;p<l;p++){
printf("ente string in structer....");
scanf("%s",&b1[p].name);
}

printf("enter name to search...");
scanf("%s",&mystr);
int top=0,bottom=l-1,mid,flag=0;
while(top<=bottom){
mid=(top+bottom)/2;
if(strcmp(b1[mid].name,mystr)==0){
    flag=1;
    break;
}
if(strcmp(b1[mid].name,mystr)>0)
bottom=mid-1;
else
top=mid+1;

}
if(flag==1)
printf("string is found.....");
else
printf("not found...");
    return 0;
}