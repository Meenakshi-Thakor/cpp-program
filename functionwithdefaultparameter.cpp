#include <iostream>

// Function declaration with default parameter
void displayMessage(std::string message = "Default Message") {
    std::cout << "Message: " << message << std::endl;
}

int main() {
    // Function call without parameter
    displayMessage(); // Output: Default Message

    // Function call with parameter
    displayMessage("Custom Message"); // Output: Custom Message

    return 0;
}
