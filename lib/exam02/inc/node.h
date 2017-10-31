#ifndef OREDERD_LINKEDLIST_NODE_H
#define OREDERD_LINKEDLIST_NODE_H


class node {
private:
    node* next;
    int data;

public:
    node();
    node(int input);
    node(int input[], int length);
    ~node();

    node *insert(int value);
    node* remove(int value);

    void print();

    int get_value(int location);


};

#endif //ORDERED_LINKEDLIST_NODE_H
