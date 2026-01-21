#include <stdio.h>

int secondLargest(int arr[], int size) {
    int largest, second;

    largest = second = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {10, 20, 5, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Second largest element is: %d\n", secondLargest(arr, size));
    return 0;
}