#include <stdio.h>
#include <string.h>

int main() {
 
int number[]={1,2,3,4,5};
for(int i=1;i<sizeof(number)/4;i++){
  printf("%p\n",&number[i]);
}


}
