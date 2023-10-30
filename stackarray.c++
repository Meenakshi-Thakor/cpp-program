#include <iostream>

class Stack {
private:
    static const int max_size = 100; 
    int arr[max_size];
    int top;

public:
    Stack() {
        top = -1; 
    }
    bool push(int value) {
        if (top >= max_size - 1) {
            std::cout << "Stack overflow. Cannot push " << value << " onto the stack." << std::endl;
            return false;
        } else {
            arr[++top] = value;
            return true;
        }
    }
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow. The stack is empty." << std::endl;
            return -1; 
        } else {
            return arr[top--];
        }
    }
    bool isEmpty() {
        return top == -1;
    }
    int peek() {
        if (isEmpty()) {
            std::cout << "The stack is empty." << std::endl;
            return -1; 
        } else {
            return arr[top];
        }
    }
    void display() {
        if (isEmpty()) {
            std::cout << "The stack is empty." << std::endl;
        } else {
            std::cout << "Stack: ";
            for (int i = 0; i <= top; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.display();

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();

    stack.display();

    return 0;
}
