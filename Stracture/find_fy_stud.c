
 struct stud
 {
int rno;

char name[20];
float per;
char sclass[10];

 }s1[100];

 #include<stdio.h>
 #include<string.h>
int main()
{
 int n,i;
 char c1[10];
 printf("enter limit....");
 scanf("%d",&n);
printf("enter student records....\n");
for( i=1;i<=n;i++)
{
printf("rno name per sclass ");
scanf("%d %s %f %s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);

}
printf("enter class for display.....\n");
scanf("%s",&c1);


for(i=1;i<=n;i++)
{
    
if(strcmp(s1[i].sclass,c1)==0){

printf("%d",s1[i].rno);
printf("%s",s1[i].name);
printf("%2.f",s1[i].per);
    }
}

    return 0;
}