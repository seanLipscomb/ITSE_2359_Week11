#ifndef ORDEREDCIRCULARLINKEDLIST_H
#define ORDEREDCIRCULARLINKEDLIST_H
 
#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node* next;
    Node(int value);
};
 
class OrderedCircularLinkedList {
private:
    Node* head;
 
public:
    OrderedCircularLinkedList();
 
    // Insert function to maintain ascending order
    void insertOrdered(int newData);
 
    // Print function to display the circular list
    void printList();
};
 
#endif