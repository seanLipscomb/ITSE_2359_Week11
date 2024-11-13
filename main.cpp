#include <iostream>
#include "OrderedCircularLinkedList.h"
#include "OrderedDoublyLinkedList.h"

int main() {
    OrderedCircularLinkedList circularList;
    OrderedDoublyLinkedList doublyList;

    int data[] = {30, 25, 35, 20, 40};
    
    std::cout << "Inserting into Circular Linked List:" << std::endl;
    for (int i : data) {
        circularList.insertOrdered(i);
    }
    std::cout << "Circular Linked List (Ascending Order): ";
    circularList.printList();

    std::cout << "\nInserting into Doubly Linked List:" << std::endl;
    for (int i : data) {
        doublyList.insertOrdered(i);
    }
    std::cout << "Doubly Linked List (Forward Order): ";
    doublyList.printForward();
    std::cout << "Doubly Linked List (Backward Order): ";
    doublyList.printBackward();

    return 0;
}
