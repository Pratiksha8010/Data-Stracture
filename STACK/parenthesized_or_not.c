#include <stdio.h>
#include <string.h>

#define MAX 30

struct stack {
    char data[MAX];
    int top;
} s;

void init() {
    s.top = -1;
}

int isfull() {
    return s.top == MAX - 1;
}

int isempty() {
    return s.top == -1;
}

void push(char num) {
    if (isfull()) {
        printf("\nStack is full, can't push....");
    } else {
        s.top++;
        s.data[s.top] = num;
        printf("\n push succ....");
    }
}

char pop() {
    char val;
    if (isempty()) {
        printf("\nStack is empty, can't pop...");
    } else {
        val = s.data[s.top];
        s.top--;
        printf("\n po succ....");
    }
    return val;
}
void disp()
{
    int i;
    for (i=s.top;i>=0;i--){
         printf("%c\t",s.data[i]);
    }
}
int main() {
    char s[MAX];
    init();
    printf("Enter expression please enter only brackets: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++) {
        if(s[i]!='(' && s[i]!= ')' && s[i]!='{' && s[i]!= '}' && s[i]!='[' && s[i]!= ']'){
            printf("alphbets not allowed....");
            break;
        }
        if (s[i] == '(') {
            push(s[i]);
        } else if (s[i] == ')') {
            if (pop() != '(') {
                printf("Not correct\n");
                return 0;
            }
        }
        if (s[i] == '{') {
            push(s[i]);
        } else if (s[i] == '}') {
            if (pop() != '{') {
                printf("Not correct\n");
                return 0;
            }
        }
        if (s[i] == '[') {
            push(s[i]);
        } else if (s[i] == ']') {
            if (pop() != '[') {
                printf("Not correct\n");
                return 0;
            }
        }
    }

    if (isempty()) {
        printf("Correct\n");
    } else {
        printf("Not correct\n");
    }

    return 0;
}