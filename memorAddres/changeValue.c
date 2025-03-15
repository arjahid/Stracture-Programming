#include <stdio.h>
#include <string.h>

int main()
{

    int number[] = {2, 3, 4, 5};
    int *ptr=number;
    *number=11;
    *(number+1)=10;
    *(number+2)=9;
    *(number+3)=8;

    for(int i=0;i<4;i++){
      printf("%d\n",*(ptr+i));
    }
   
}
