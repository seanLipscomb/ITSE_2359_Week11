#ifndef ORDEREDCIRCULARLINKEDLIST_H
#define ORDEREDCIRCULARLINKEDLIST_H

#include <iostream>

// node structure for Ordered Circular Linked List
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};
// class to define head
class OrderedCircularLinkedList {
private:
    Node* head;

public:
    OrderedCircularLinkedList();
    ~OrderedCircularLinkedList();
    
    void insertOrdered(int newData);
    void printList() const;
    bool isEmpty() const;
};

#endif