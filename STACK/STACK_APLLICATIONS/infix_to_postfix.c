#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max 40
struct stack
{
    char data[max];  
    int top;
} s;

void init()
{
    s.top = -1;  
}

int empty()
{
    if (s.top == -1)
        return 1;
    else
        return 0;
}

int full()
{
    if (s.top == max - 1)
        return 1;
    else
        return 0;
}

void push(char c)
{
    if (full())
        printf("stack is full, cannot push...");
    else
    {
        s.top++;
        s.data[s.top] = c;
    }
}

char pop()
{
    char val;
    if (empty())
    {
        printf("\nstack is empty..");
        return '\0';  
    }
    else
    {
        val = s.data[s.top];
        s.top--;
        return val;
    }
}

int priority(char k)
{
    if (k == '(')
        return 0;
    if (k == '+' || k == '-')
        return 1;
    if (k == '*' || k == '/')
        return 2;
    if ((k == '$' || k == '^'))  
        return 3;
}

int main() 
{
    char a[20], ch;
    int i;
    printf("enter infix string..");
    gets(a);  

    init();

    printf("\n postfix ex..");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (isalpha(a[i]))
            printf("%c", a[i]);
        else if (a[i] == '(')
            push(a[i]);
        else if (a[i] == ')')
        {
            while ((ch = pop()) != '(')
                printf("%c", ch);
        }
        else
        {
            while (!empty() && priority(s.data[s.top]) >= priority(a[i]))
            {
                ch = pop();
                printf("%c", ch);
            }
            push(a[i]);
        }
    }

    while (!empty())
    {
        ch = pop();
        printf("%c", ch);
    }

    return 0;
}