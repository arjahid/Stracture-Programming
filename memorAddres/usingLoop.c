#include <stdio.h>
#include <string.h>

int main()
{

    int number[] = {2, 3, 4, 5};
    int *ptr=number;
    for(int i=0;i<4;i++){
      printf("%d\n",*(ptr+i));
    }
   
}
