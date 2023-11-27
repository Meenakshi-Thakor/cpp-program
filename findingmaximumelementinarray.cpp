#include <iostream>

int main() {
    const int size = 6;
    int arr[size] = {10, 23, 5, 17, 8, 14};
    int max = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum element in the array: " << max << std::endl;
    return 0;
}
