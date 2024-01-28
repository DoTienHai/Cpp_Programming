
#ifndef LINKED_LIST_CPP
#define LINKED_LIST_CPP

#include "linkedList.h"
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr){};
template <typename T>
LinkedList<T>::~LinkedList()
{
    while (this->head != nullptr)
    {
        int data;
        this->popAtHead(&data);   
    }
}

template <typename T>
void LinkedList<T>::insertAtTail(T data)
{
    Node<T> *temp = new Node<T>(data);

    if (this->tail == nullptr)
    {
        this->tail = temp;
        this->head = temp;
    }
    else
    {
        temp->setPrev(this->tail);
        this->tail->setNext(temp);
        this->tail = temp;
    }
}
template <typename T>
void LinkedList<T>::popAtTail(T *data)
{
    if (this->tail == nullptr)
    {
        cout << "Empty" << endl;
        return;
    }

    if (this->head == this->tail)
    {
        *data = this->tail->getData();
        delete this->tail;
        this->head = nullptr;
        this->tail = nullptr;
        cout << "1 element" << endl;
        return;
    }

    *data = this->tail->getData();
    this->tail = this->tail->getPrev();
    cout << ">1 element" << endl;
    delete this->tail->getNext();
    this->tail->setNext(nullptr);
}
template <typename T>
void LinkedList<T>::insertAtHead(T data)
{
    Node<T> *temp = new Node<T>(data);

    if (this->head == nullptr)
    {
        this->tail = temp;
        this->head = temp;
    }
    else
    {
        temp->setNext(this->head);
        this->head->setPrev(temp);
        this->head = temp;
    }
}
template <typename T>
void LinkedList<T>::popAtHead(T *data)
{
    if (this->head == nullptr)
    {
        cout << "Empty" << endl;
        return;
    }

    if (this->head == this->tail)
    {
        *data = this->tail->getData();
        delete this->tail;
        this->head = nullptr;
        this->tail = nullptr;
        cout << "1 element" << endl;
        return;
    }

    *data = this->head->getData();
    this->head = this->head->getNext();
    cout << ">1 element" << endl;
    this->head->getPrev()->setNext(nullptr);
    delete this->head->getPrev();
    this->head->setPrev(nullptr);
}

template <typename T>
void LinkedList<T>::insert(int index, T data)
{
    Node<T> *temp = this->head;
    if (temp == nullptr)
    {
        this->insertAtHead(data);
        cout << "Empty linked list. Data insert to head." << endl;
    }
    else
    {

        while (index != 1 && temp != nullptr)
        {
            index--;
            temp = temp->getNext();
        }

        if (temp == nullptr)
        {
            this->insertAtTail(data);
            cout << "out of range. Data insert to tail!" << endl;
        }
        else
        {
            Node<T> *tempNode = new Node<T>(data);

            temp->getNext()->setPrev(tempNode);
            tempNode->setNext(temp->getNext());
            temp->setNext(tempNode);
            tempNode->setPrev(temp);
        }
    }
}

template <typename T>
void LinkedList<T>::pop(int index, T *data)
{
    Node<T> *temp = this->head;
    if (temp == nullptr)
    {
        cout << "Empty linked list. No Data." << endl;
        return;
    }
    if (index <= 1)
    {
        this->popAtHead(data);
        cout << "pop at 1" << endl;
        return;
    }

    while (index != 1 && temp != nullptr)
    {
        index--;
        temp = temp->getNext();
    }

    if (temp == nullptr || temp == this->tail)
    {
        this->popAtTail(data);
        cout << "out of range. pop at tail!" << endl;
        return;
    }

    *data = temp->getData();
    temp->getPrev()->setNext(temp->getNext());
    temp->getNext()->setPrev(temp->getPrev());
    delete temp;
}

template <typename T>
void LinkedList<T>::display()
{
    Node<T> *temp = this->head;
    while (temp != nullptr)
    {
        temp->display();
        temp = temp->getNext();
    }
}
#endif // LINKED_LIST_CPP