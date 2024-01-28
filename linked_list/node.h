
#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

template <typename T>
class Node
{
private:
    /* data */
    T data;
    Node *next;
    Node *prev;

public:
    Node(){};
    Node(T data);
    ~Node();

    T getData();
    void setData(const T &data);

    Node *getNext();
    void setNext(Node *next);
    
    Node *getPrev();
    void setPrev(Node *prev);

    void display();
};

#include "node.cpp"

#endif // !NODE_H