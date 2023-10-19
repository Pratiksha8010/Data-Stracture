#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *list)
{
    int i, n;
    struct node *temp, *newnode;
    printf("enter limit...");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter elements...");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (list == NULL)
        {
            list = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    return list;
}

void disp(struct node *list)
{
    struct node *temp;
    for (temp = list; temp != NULL; temp = temp->next)
    {
        printf("%d\t", temp->data);
    }
}

struct node *rotete(struct node *list, int pos)
{
    int i;
    struct node *temp, *temp1, *t, *y, *k;
    for (i = 1, temp = list; temp != NULL && i < pos - 1; temp = temp->next, i++)
        ;
    temp1 = temp->next;
    temp1 = temp1->next;
    k = t = temp1;
    temp = temp->next;

    for (y = t; y->next != NULL; y = y->next)
        ;
    y->next = list;
    list = k;
    temp->next = NULL;

    return list;
}

int main()
{
    int pos;
    struct node *list = NULL;
    list = create(list);
    printf("\n original list is...............\n");
    disp(list);

    printf("\nenter position.....");
    scanf("%d", &pos);

    list = rotete(list, pos);
    printf("\n rotete list is................\n");
    disp(list);
}