//
// Created by aakas on 12/7/2017.
//

#ifndef CMPE126F17_EXAM3A_NODE_H
#define CMPE126F17_EXAM3A_NODE_H

class node {
public:
    node *next, *prev;
    int data;
    unsigned count;


    explicit node(int info) : data(info), next(nullptr), prev(nullptr), count(1) {}
};

#endif //CMPE126F17_EXAM3A_NODE_H
