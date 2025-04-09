#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);  // Taking input into str1

    printf("Enter second string: ");
   fgets(str2,sizeof(str2),stdin);  // Taking input into str2

    // Find the end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Copy each character of str2 into str1 (starting from end of str1)
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    // Add null terminator at the end of combined string
    str1[i + j] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}