#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }
    void append(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }
    void displayFromBeginning() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
    void displayFromEnd() {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        while (current != nullptr) {
            std::cout << current->data << " <-> ";
            current = current->prev;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    DoublyLinkedList doublyLinkedList;

    doublyLinkedList.append(1);
    doublyLinkedList.append(2);
    doublyLinkedList.append(3);
    doublyLinkedList.append(4);

    std::cout << "Doubly Linked List (from the beginning): ";
    doublyLinkedList.displayFromBeginning();

    std::cout << "Doubly Linked List (from the end): ";
    doublyLinkedList.displayFromEnd();

    return 0;
}
