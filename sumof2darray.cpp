#include <iostream>

const int ROWS = 3;
const int COLS = 4;

int sum2DArray(int arr[][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}};

    int totalSum = sum2DArray(arr);
    std::cout << "Sum of 2D array elements: " << totalSum << std::endl;

    return 0;
}
