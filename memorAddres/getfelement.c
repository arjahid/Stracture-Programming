#include <stdio.h>
#include <string.h>

int main()
{

    int number[] = {2, 2, 3, 4, 5};
    printf("%d\n",number[0]);
    printf("%d", *number);
    printf("%d", *number+1);
    printf("%d", *number+2);
    printf("%d", *number+3);
    // so we get first element of array by using *numbeer(pointer) also using number[0]
}
