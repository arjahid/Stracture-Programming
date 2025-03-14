#include <stdio.h>

int main() {
 
  char name[20];
  printf("Enter your fullname here:\n");
  fgets(name,sizeof(name),stdin);
  printf("%s",name);
  
  return 0;
}
