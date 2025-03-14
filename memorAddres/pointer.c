#include <stdio.h>
#include <string.h>

int main() {
 
 char *number[]={"jahid","hasan","jahid","atai bastob"};
 int size=(sizeof(number)/sizeof(number[0]));
for(int i=0;i<size;i++){
  printf("%s \n",number[i]);
}


}