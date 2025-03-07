#include <stdio.h>

int main() {
    int n = 4, num, max;

    scanf("%d", &max); // Read the first number and assume it's the maximum

    for (int i = 1; i < n; i++) { // Start from 1 since first number is already read
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("%d\n", max);

    return 0;
}
