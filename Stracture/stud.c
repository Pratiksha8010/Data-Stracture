
 struct stud
 {
int rno;
char name[20];
float per;
char sclass[10];

 }s1[100];

 #include<stdio.h>
int main()
{
 int n;
 printf("enter limit....");
 scanf("%d",&n);
printf("enter student records....\n");
for(int i=1;i<=n;i++)
{
printf("rno name per sclass ");
scanf("%d %s %f %s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);

}

for(int i=1;i<=n;i++)
{
printf("%d",s1[i].rno);
printf("%s",s1[i].name);
printf("%2.f",s1[i].per);
printf("%s",s1[i].sclass);
}

    return 0;
}