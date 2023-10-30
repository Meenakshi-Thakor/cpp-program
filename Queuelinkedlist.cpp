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

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }
    bool isEmpty() {
        return front == nullptr;
    }
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1; 
        } else {
            int value = front->data;
            Node* temp = front;
            front = front->next;
            delete temp;
            return value;
        }
    }
    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1; 
        } else {
            return front->data;
        }
    }
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        Node* current = front;
        std::cout << "Queue: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    queue.display();

    std::cout << "Front element: " << queue.getFront() << std::endl;

    queue.dequeue();

    queue.display();

    return 0;
}
