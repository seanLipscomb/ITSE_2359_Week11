#ifndef ORDEREDDUBLYLINKEDLIST_H
#define ORDEREDDUBLYLINKEDLIST_H

#include <iostream>

// node structure for Ordered Doubly Linked List with unique node name to avoid data error
struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
    
    DoublyNode(int value) : data(value), prev(nullptr), next(nullptr) {}
};
// class to define head and tail
class OrderedDoublyLinkedList {
private:
    DoublyNode* head;
    DoublyNode* tail;

public:
    OrderedDoublyLinkedList();
    ~OrderedDoublyLinkedList();
    
    void insertOrdered(int newData);
    void printForward() const;
    void printBackward() const;
    bool isEmpty() const;
};

#endif
