#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,n1,n2,n3;
char s1[20][20],s2[20][20],s3[40][40];

printf("enter first array limit...");
scanf("%d",&n1);

printf("n name......\n ");
for(i=0;i<n1;i++){
    scanf("%s",&s1[i]);
}
printf("enter secound array limit ");
scanf("%d",&n2);

printf("n name....\n ");
for(j=0;j<n2;j++){
scanf("%s",&s2[j]);
}

i=0;j=0;k=0;
n3=n1+n2;
while(i<n1){
if(strcmp(s1[i], s2[j]) < 0) {
     strcpy(s3[k++],s1[i++]);
}
else{
    strcpy(s3[k++],s2[j++]);
}
}
while(i<n1){
strcpy(s3[k++],s1[i++]);
}

while(j<n2){
     strcpy(s3[k++],s2[j++]);
}

for (k=0;k<n3;k++){
    printf("%s\t",s3[k]);

}
   return 0;
}