#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include "node.h"
using namespace std;

template <typename T>
class LinkedList
{
private:
    /* data */
    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList();
    ~LinkedList();

    void insertAtTail(T data);
    void popAtTail(T *data);
    void insertAtHead(T data);
    void popAtHead(T *data);

    void insert(int index, T data);
    void pop(int index, T *data);

    void display();
};

#include "linkedList.cpp"



#endif // !LINKED_LIST_H

