#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 50

typedef struct _Film {
    char title[TSIZE];
    int rating;
    struct _Film *next;
} Film;

void insert_node(Film *, Film *);

int main(void)
{
    Film * head = NULL;
    Film * tail = NULL;
    for (int i = 0; i < 10; i++)
    {
        Film * current = malloc(sizeof(Film));
        strcpy(current->title, "aaa");
        current->rating = rand();
        current->next = NULL;
        if (head == NULL)
        {
            head = current;
        } else
        {
            insert_node(tail, current);
        }
        tail = current;
    }
    Film * cur = head;
    while(cur != NULL)
    {
        printf("current.rating=%d.\n", cur->rating);
        cur = cur->next;
    }
    return 0;
}

void insert_node(Film * old_node, Film * new_node)
{
    Film *tmp = old_node->next;
    old_node->next = new_node;
    new_node->next = tmp;
}

