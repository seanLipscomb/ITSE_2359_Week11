#ifndef ORDEREDDOUBLYLINKEDLIST_H
#define ORDEREDDOUBLYLINKEDLIST_H
 
#include <iostream>
using namespace std;
 
struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value);
};
 
class OrderedDoublyLinkedList {
private:
    DoublyNode* head;
    DoublyNode* tail;
 
public:
    OrderedDoublyLinkedList();
 
    // Insert function to maintain ascending order
    void insertOrdered(int newData);
 
    // Print list forward
    void printForward();
 
    // Print list backward
    void printBackward();
};
 
#endif