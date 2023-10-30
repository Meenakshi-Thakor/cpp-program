#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }
    void append(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            head->next = head; 
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }
    void traverseAndDisplay() {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);

        std::cout << " (Back to Head)" << std::endl;
    }
};

int main() {
    CircularLinkedList circularLinkedList;

    circularLinkedList.append(1);
    circularLinkedList.append(2);
    circularLinkedList.append(3);
    circularLinkedList.append(4);

    std::cout << "Circular Linked List: ";
    circularLinkedList.traverseAndDisplay();

    return 0;
}
