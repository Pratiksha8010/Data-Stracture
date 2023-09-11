#include <stdio.h>
#include <string.h>

int main() {
    char s1[100][20]; 
    char name[20];
    int i, n, flag = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Enter names into the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", s1[i]);
    }

    printf("Enter name for searching: ");
    scanf("%s", name);

    for (i = 0; i < n; i++) {
        if (strcmp(s1[i], name) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("Name is found.\n");
    } else {
        printf("Name is not found.\n");
    }

    return 0;
}
