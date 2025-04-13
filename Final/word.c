#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int words = 1;

    printf("Enter a sentence: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}
