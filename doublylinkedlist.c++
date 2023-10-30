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
    void deleteNode(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }

                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                }

                delete current;
                return;
            }
            current = current->next;
        }

        std::cout << "Value not found in the list." << std::endl;
    }   
    void displayFromBeginning() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " <-> ";
            current = current->next;
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

    doublyLinkedList.deleteNode(2); // Delete a node with value 2
    doublyLinkedList.deleteNode(5); // Try to delete a node with value 5, which is not in the list

    std::cout << "Updated Doubly Linked List: ";
    doublyLinkedList.displayFromBeginning();

    return 0;
}
