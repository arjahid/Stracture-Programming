#include <stdio.h>

int main() {
    int num[] = {1, 2, 3, 4,4,5,6,3,4,5,5,6,4,6,4,56,4,3}; 
    int length=sizeof(num)/4;
    printf("%lu\n",sizeof(num));
    printf("%d",length);
    return 0; 
}
