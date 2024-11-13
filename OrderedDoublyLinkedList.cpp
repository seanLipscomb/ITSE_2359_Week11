#include "OrderedDoublyLinkedList.h"

OrderedDoublyLinkedList::OrderedDoublyLinkedList() : head(nullptr), tail(nullptr) {}

OrderedDoublyLinkedList::~OrderedDoublyLinkedList() {
    DoublyNode* current = head;
    while (current != nullptr) {
        DoublyNode* temp = current;
        current = current->next;
        delete temp;
    }
}

bool OrderedDoublyLinkedList::isEmpty() const {
    return head == nullptr;
}

void OrderedDoublyLinkedList::insertOrdered(int newData) {
    DoublyNode* newNode = new DoublyNode(newData);

    if (isEmpty()) {
        head = tail = newNode;
        return;
    }

    DoublyNode* current = head;
    
    // insert at the beginning
    if (newData < head->data) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    // move through the list to find the correct insertion point
    while (current != nullptr && current->data < newData) {
        current = current->next;
    }

    if (current == nullptr) {
        // insert at the end
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    } else {
        // insert in the middle
        newNode->prev = current->prev;
        newNode->next = current;
        if (current->prev) current->prev->next = newNode;
        current->prev = newNode;
    }
}

void OrderedDoublyLinkedList::printForward() const {
    if (isEmpty()) return;
    DoublyNode* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void OrderedDoublyLinkedList::printBackward() const {
    if (isEmpty()) return;
    DoublyNode* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}
