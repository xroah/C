#include <stdio.h>
#include <stdlib.h>

typedef struct _Object {
    char *name;
    char gender;
    int age;
} Object;

typedef struct _List {
    void *data;
    struct _List *next;
} List;

void add(void*);
void del(List*, Object*);
void print_list(List*);

static List *head = 0;
static List *tail = 0;
static int size = 0;

void add(void *data)
{
    List *current = (List *) malloc(sizeof (List));
    
    current->data = data;
    current->next = 0;
    
    if (head == 0)
    {
        head = current;
    }
    else 
    {
        tail->next = current;
    }
    
    tail = current;
    
    size++;
}

void print_list(List *l)
{
    while (l)
    {
        Object *data = (Object *)l->data;
        
        printf("name=%s, gender=%c, age=%d\n", data->name, data->gender, data->age);
        
        l = l->next;
    }
}

void del(List *l, Object *o)
{
    List *list = 0;
    List *prev = l;
    
    while(l) {
        Object *data = (Object *)l->data;
        
        if (data == o) {
            list = l;
            break;
        }
        
        prev = l;
        l = l->next;
    }
    
    if (list) 
    {
        Object *d = (Object *)l->data;
        
        if (list == head)
        {
            head = head->next;
        } else {
            prev->next = list->next;
        }
        
        printf("+++++++++++++++++++\n");
        printf("Deleted: name=%s, gender=%c, age=%d\n", d->name, d->gender, d->age);
        printf("+++++++++++++++++++\n");
        
        free(list);
    }
}

int main(void)
{
    int s = sizeof(Object);
    Object o1 = {
        "Jack",
        'm',
        30
    };
    Object o2 = {
        "Amy",
        'f',
        20
    };
    Object o3 = {
        "Mike",
        'm',
        24
    };
    Object o4 = {
        "John",
        'm',
        35
    };
    Object o5 = {
        "Lily",
        'f',
        25
    };
    
    add(&o1);
    add(&o2);
    add(&o3);
    add(&o4);
    add(&o5);
    
    printf("List size: %d\n", size);
    print_list(head);
    
    del(head, &o1);
    print_list(head);
    
    return 0;
}
































