#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
struct node *create(struct node *list)
{
    int i, n;
    struct node *temp, *newnode;
    printf("enter limit...");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data...");
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

void revl(NODE *list)
{
    NODE *temp, *temp1, *temp2;
    int l = 0, i;
    for (temp2 = list; temp2 != NULL; temp2 = temp2->next)
    {
        l++;
    }
    for (temp = list; temp->next != NULL; temp = temp->next)
    {
        for (temp1 = list, i = 1; temp1 != NULL && i < l - 1; temp1 = temp1->next, i++)
            ;

        l = l - 1;
        temp1 = temp1->next;
        printf("%d\t", temp1->data);
    }
    printf("%d", list->data);
}

int main()
{
    struct node *list = NULL;
    list = create(list);
    disp(list);
    printf("\n-----------------------------------\n");
    revl(list);
}