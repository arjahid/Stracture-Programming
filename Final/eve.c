#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};         // Example array
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int even = 0, odd = 0;

    // Loop to count even and odd numbers
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            even++; // Increment even count
        } else {
            odd++; // Increment odd count
        }
    }

    // Print results
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}