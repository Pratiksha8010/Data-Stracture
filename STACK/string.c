#include<stdio.h>
#define LIMIT 50
struct stack
{
 char data[LIMIT];
 int top;

}p; 

void init ()
{
p.top=-1;

}

int isfull()
{
    if(p.top==LIMIT-1){
        return 1;
    }
    else{
        return 0;
    }
}

// int isempty()
// {
//     if(p.top==-1)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

void push(char c)
{
    if(isfull()){
        printf("\n stack is full dont push....");
    }
    else{
        p.top++;
        p.data[p.top]=c;
    }

}

void disp()
{
    int i;
    for(i=p.top;i>=0;i--){
        printf("%c",p.data[i]);

    }
}

int main()
{
    int i;
    char s1[50];
    init();
    printf("\n enter string..");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
        push(s1[i]);

    }
    printf("\n string is....");
     disp();

}

