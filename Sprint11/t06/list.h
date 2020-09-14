#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
} t_list;

void mx_push_back(t_list **list, void *data);
t_list *mx_create_node(void *data);
void mx_push_index(t_list **list, void *data, int index);
void mx_push_front(t_list **list, void *data);

#endif
