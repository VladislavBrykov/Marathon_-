#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

void mx_push_back(t_list **list, void *data);
t_list *mx_create_node(void *data);

#endif
