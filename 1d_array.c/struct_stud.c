#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    float per;
} s1[100];

int main(){
int i,n;
printf("enter limit...");
 scanf ("%d",&n);

for(i=0;i<n;i++){
printf("enter  rno name per ");
scanf("%d %c %f",&s1[i].rno,&s1[i].name,&s1[i].per);
}
for(i=0;i<n;i++){
    printf("%d",s1[i].rno);
    printf("%c",s1[i].name);
    printf("%f",s1[i].per);
}

 return 0;
}
