#ifndef NODE_CPP
#define NODE_CPP

#include "node.h"

template <typename T>
Node<T>::Node(T data) : next(nullptr), prev(nullptr)
{
    this->data = data;
}
template <typename T>
Node<T>::~Node()
{
    this->next = nullptr;
    this->prev = nullptr;
    // this->display();

}
template <typename T>
T Node<T>::getData()
{
    return this->data;
}

template <typename T>
void Node<T>::setData(const T &data)
{
    this->data = data;
}
template <typename T>
Node<T> *Node<T>::getNext()
{
    return this->next;
}
template <typename T>
void Node<T>::setNext(Node *next)
{
    this->next = next;
}
template <typename T>
Node<T> *Node<T>::getPrev()
{
    return this->prev;
}
template <typename T>
void Node<T>::setPrev(Node *prev)
{
    this->prev = prev;
}

template <typename T>
void Node<T>::display()
{
    cout << "node data: "
         << this->data << " "
         << this->prev << " "
         << this->next << endl;
}

#endif // !NODE_CPP