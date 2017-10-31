#include "ordered_linkedlist.h"
#include <iostream>

// Default constructor for creating a linked list with nothing in it
linked_list::linked_list()
{
    head = nullptr;
}

// Default constructor for creating a linked list with a given value
linked_list::linked_list(int value)
{
    head= new node(value);
}

// Default constructor for creating an ordered linked list from a given integer array
linked_list::linked_list(int values[], int length)
{
    head= new node(values,length);
}

// Default destructor. Should run through each of the nodes and delete them
linked_list::~linked_list()
{
    delete head;
}

// Add a single value to the ordered list
void linked_list::insert(int value)
{
    if(head== nullptr) {
        return;
    }
    else {
        head= head->insert(value);
    }
}

// Remove a value if exists
void linked_list::remove(int value)
{
    if(head== nullptr) {
        return;
    }
    else {
        head= head->remove(value);
    }
}


// Reverse the entire linked list
void linked_list::reverse_list()
{
   
}

// Intersect the linked list with a given ordered linked list
void linked_list::list_intersect(linked_list* list_to_intersect)
{
   
}

// Union the linked list with a given ordered linked list
void linked_list::list_union(linked_list* list_to_union)
{
   
}



// Check whether the list is accending or decending
bool linked_list::check_order()
{


}


// Get the data at the given location
int linked_list::get_value(int location)
{
    return head->get_value(location);
}

// Print top k values
void linked_list::print_topk()
{


}

// Print bottom k values
void linked_list::print_bottomk()
{


}

// Print the entire linked list
void linked_list::print()
{
    head->print();
}
