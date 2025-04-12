#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "hello";
    char str2[100] = "hello";
    int i = 0, isEqual = 1;

    // Loop to compare characters of both strings
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0; // Strings are not equal
            break;
        }
        i++;
    }

    // Print result
    if (isEqual) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}