#include <iostream>

// Function declaration (prototype)
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;

    // Function call
    int result = add(x, y);
    
    std::cout << "Result of addition: " << result << std::endl;

    return 0;
}
