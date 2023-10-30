#include <iostream>

class Queue {
private:
    static const int max_size = 100; 
    int arr[max_size];
    int front;
    int rear;

public:
    Queue() {
        front = -1; 
        rear = -1; 
    }
    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return (rear == max_size - 1 && front == 0) || (rear == front - 1);
    }
    bool enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue " << value << "." << std::endl;
            return false;
        } else if (front == -1) {
            front = rear = 0;
        } else if (rear == max_size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1; 
        } else if (front == rear) {
            int value = arr[front];
            front = rear = -1;
            return value;
        } else if (front == max_size - 1) {
            int value = arr[front];
            front = 0;
            return value;
        } else {
            return arr[front++];
        }
    }
    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return -1; 
        } else {
            return arr[front];
        }
    }
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }
        std::cout << "Queue: ";
        if (front <= rear) {
            for (int i = front; i <= rear; i++) {
                std::cout << arr[i] << " ";
            }
        } else {
            for (int i = front; i < max_size; i++) {
                std::cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                std::cout << arr[i] << " ";
            }
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
