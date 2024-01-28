/**
 * @file main.cpp
 * @author HaiDT25 & LinhNQ21
 * @brief This project implements linked list by using class in C++. Type "make" in terminal to build and run.
 * @version 0.1
 * @date 2024-01-28
 *
 * @copyright Copyright (c) 2024
 */
#include <iostream>
#include <vector>
#include "linkedList.h"
using namespace std;

int main()
{
    LinkedList<int> myLinkedList;
    myLinkedList.insertAtTail(5);
    myLinkedList.insertAtTail(6);
    myLinkedList.insertAtHead(10);
    myLinkedList.insertAtHead(12);
    myLinkedList.display();

    int data;
    // myLinkedList.popAtHead(&data);
    // cout << data << endl;
    myLinkedList.popAtTail(&data);
    cout << data << endl;
    myLinkedList.pop(3, &data);
    cout << "pop at 3: " << data << endl;
    myLinkedList.display();

    myLinkedList.pop(10, &data);
    cout << "pop at 10: " << data << endl;
    myLinkedList.display();
    myLinkedList.pop(1, &data);
    cout << "pop at 1: " << data << endl;
    myLinkedList.display();

    return 0;
}