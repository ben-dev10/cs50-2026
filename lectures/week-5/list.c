#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return 1;
        }

        n->number = get_int("Number: ");
        n->next = NULL;

        // prepend(insert at beginning) node to the list
        n->next = list;
        list = n;
    }

    // print numbers
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    // OR: alternative to print numbers
    // for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    // {
    //     printf("%i\n", ptr->number);
    // }

    return 0;
}

// (*n).number = get_int("Number: ") is qual to  n->number = get_int("Number: "); go the "n" node and point to the number feild
// memory leak: when you lose a pointer to a chunk of useful data