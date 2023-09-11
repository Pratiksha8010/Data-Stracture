
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
 int rn;
int flag=0;
 printf("enter limit....");
 scanf("%d",&n);
printf("enter student records....\n");
for( i=1;i<=n;i++)
{
printf("rno name per sclass ");
scanf("%d %s %f %s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);

}
printf("enter rno for display.....\n");
scanf("%d",&rn);


for(i=1;i<=n;i++)
{
    
if(s1[i].rno==rn){
    flag=1;
    break;
    }
    
}

if(flag==1){
    printf("record is found....");
    
printf("%d\t ",s1[i].rno);
printf("%s\t ",s1[i].name);
printf("%2.f\t ",s1[i].per);


}
else{
    printf("record is not found.......");
}

    return 0;
}