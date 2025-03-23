#include <stdio.h>

int main()
{
   char name[]="jahid Hasan jahid";
  for(int i=0;i<sizeof(name)/sizeof(name[0]);i++){
      printf("%c",name[i]);
  }
}