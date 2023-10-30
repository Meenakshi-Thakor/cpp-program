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
    void deleteNode(int value) {
        if (head == nullptr) {
            std::cout << "Circular Linked List is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        bool found = false;

        do {
            if (current->data == value) {
                found = true;
                break;
            }

            prev = current;
            current = current->next;
        } while (current != head);

        if (found) {
            if (current == head) {
                head = current->next;
                prev->next = head; 
            } else {
                prev->next = current->next;
            }

            delete current;
            std::cout << "Node with value " << value << " deleted." << std::endl;
        } else {
            std::cout << "Value not found in the list." << std::endl;
        }
    }
    void display() {
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
    circularLinkedList.display();

    circularLinkedList.deleteNode(2); 
    circularLinkedList.deleteNode(5); 

    std::cout << "Updated Circular Linked List: ";
    circularLinkedList.display();

    return 0;
}
