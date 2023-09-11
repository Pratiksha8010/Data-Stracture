#include <stdio.h>
void ser(int a[], int num, int l)
{
    int f = 0;
    for (int j = 0; j < l; j++)
    {
        if (a[j] == num)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("num is found...");

    else

        printf("num is not found...");
}
int main()
{
    int a[100], num, l;
    printf("enter limit..");
    scanf("%d", &l);
    printf("enter n element...");
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter num for search...");
    scanf("%d",&num);
    ser( a,num,l);
}
