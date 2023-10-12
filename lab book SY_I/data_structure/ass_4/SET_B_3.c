#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cities
{
    char cname[20];
    int code;
}c1[100];

int main()
{
FILE *cf;
int flag=0,mid,top,bottom,ccode,i=0,n;
char name[20],x[20];

cf=fopen("array_con_name_id.txt","r");
 
 if(cf==NULL){
    printf("file is not found....");
    exit(0);
 }
while(!feof(cf))
{
    fscanf(cf,"%s%d",&name,&ccode);
    strcpy(c1[i].cname,name);
    c1[i].code=ccode;
    i++;
}
n=i;
printf("enter city to search....");
scanf("%s",&x);
top=0,bottom=n-1;
while(top<=bottom)
{
    mid=(top+bottom)/2;
if(strcmp(x,c1[mid].cname)==0)
{
    flag=1;
    break;
}

if(strcmp(x,c1[mid].cname)>0)
    top=mid+1;

else
    bottom=mid-1;

}
if(flag==1)
printf("%s\t%d\t",c1[mid].cname,c1[mid].code);
else
printf("rec is not found....");

fclose(cf);
    return 0;
}