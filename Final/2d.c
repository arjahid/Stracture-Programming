#include <stdio.h>
#include <string.h>

int main() {
    char st1[100] = "My name is ";
    char st2[] = "Jahid Hasan";
    int i = 0, j = 0;

    // Find the length of st1 to append st2
    while (st1[i] != '\0') {
        i++;
    }

    // Append st2 to st1
    while (st2[j] != '\0') {
        st1[i] = st2[j];
        i++;
        j++;
    }

    // Add null terminator to the end
    st1[i] = '\0';

    // Print the concatenated string
    puts(st1);

    return 0;
}