#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, index, min;
    char day[20][20] = {"monday", "tuesday", "wednsday", "thursday", "friday", "saturday", "sunday"};
    char t[20][20];

    for (i = 1; i < 7; i++)
    {
        strcpy(t, day[i]);
        for (j = i - 1; j >= 0 && strcmp(t, day[j] < 0); j--)
        {
            strcpy(day[j + 1], day[j]);
        }
        strcmp(day[j + 1], t);
    }
    printf("sorted day's.......\n");
    for (i = 0; i < 7; i++)
    {
        printf("%s", day[i]);
    }
    return 0;
}