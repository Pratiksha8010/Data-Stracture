#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *n;
    char myname[100];
    int id;
    n=fopen("name_data.txt","r");
    if(n==NULL){
        printf("file not found...");
        exit(0);
    }
    while(!feof(n))
    {
        fscanf(n,"%s",&myname);
        fscanf(n,"%d",&id);
        printf("%s\t",myname);
        printf("%d\t",id);
    }
    fclose(n);
  return 0;

}