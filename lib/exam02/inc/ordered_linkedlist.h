#ifndef ORDERED_LINKEDLIST_LINKEDLIST_H
#define ORDERED_LINKEDLIST_LINKEDLIST_H

#include "node.h"

class linked_list
{
private:
    node* head;

public:
    linked_list();
    linked_list(int value);
    linked_list(int values[], int length);
    ~linked_list();

    void insert(int value);
    void remove(int value);

    void reverse_list();
    void list_intersect(linked_list* list_to_intersect);
    void list_union(linked_list* list_to_union);

    bool check_order();

    int get_value(int location);

    void print();
    void print_topk();
    void print_bottomk();

};


#endif //ORDERED_LINKEDLIST_LINKEDLIST_H
