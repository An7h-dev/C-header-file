#include <stdio.h>

int isPalindrome(int number);
int isEven(int number);
int isOdd(int number);
void bubbleSort(int arr[], int n);

int isPalindrome(int number) {
    int original = number, reversed = 0, remainder;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return original == reversed;
}

int isEven(int number) {
    return number % 2 == 0;
}

int isOdd(int number) {
    return number % 2 != 0;
}

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

