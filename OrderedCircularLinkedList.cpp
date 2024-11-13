#include "OrderedCircularLinkedList.h"

OrderedCircularLinkedList::OrderedCircularLinkedList() : head(nullptr) {}

OrderedCircularLinkedList::~OrderedCircularLinkedList() {
    if (head == nullptr) return;
    Node* current = head;
    do {
        Node* temp = current;
        current = current->next;
        delete temp;
    } while (current != head);
}

bool OrderedCircularLinkedList::isEmpty() const {
    return head == nullptr;
}

void OrderedCircularLinkedList::insertOrdered(int newData) {
    Node* newNode = new Node(newData);
    
    if (isEmpty()) {
        head = newNode;
        newNode->next = head;
        return;
    }
    
    Node* current = head;
    Node* prev = nullptr;

    // move through the list to find the correct insertion point
    do {
        if (current->data >= newData) break;
        prev = current;
        current = current->next;
    } while (current != head);
    
    if (prev == nullptr) {
        // insert before the head (new head)
        newNode->next = head;
        head = newNode;
        
        // find the last node to make it point to the new head
        Node* temp = head;
        while (temp->next != current) {
            temp = temp->next;
        }
        temp->next = head;
    } else {
        // insert after the previous node
        newNode->next = current;
        prev->next = newNode;
    }
}

void OrderedCircularLinkedList::printList() const {
    if (isEmpty()) return;
    Node* current = head;
    do {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}
