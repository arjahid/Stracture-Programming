#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    double result = (double)a / b;
    
    printf("The result of a/b is %.f (using floor)\n", floor(result));
    printf("The result of a/b is %.f (using ceil)\n", ceil(result));
    printf("The result of a/b is %.f (using round)\n", round(result));
    
    return 0;
}
