
/*
#include<stdio.h>
int main(){
int a[100],l,t=0;
printf("enter limit..");
scanf("%d",&l);
printf("enter n element....");
for(int i=0;i<l;i++){
scanf("%d",&a[i]);
}
int m=0;
for(int j=0;j<l;j++){
    if(a[j]>m){
        m=a[j];

    }

}
    printf("%d",m);

return 0;
}
*/
#include<stdio.h>
int max( int a[], int l){
int m=0;
for(int j=0;j<l;j++){
    if(a[j]>m){
        m=a[j];

    }

}

return m;
}
int main (){
int a[100],l;
printf("enter limit..");
scanf("%d",&l);
printf("enter n element....");
for(int i=0;i<l;i++){
scanf("%d",&a[i]);
}

int ans= max(a,l);
printf("%d",ans);

}

