#include <stdio.h>
#include <string.h>

void name(char name[]){
  printf("%s \n",name);
}
void age(int age){
  printf("%d",age);
}
int main(){
  name("jahid");
  name("hasan");
  name("jahid");
  age(23);
}
