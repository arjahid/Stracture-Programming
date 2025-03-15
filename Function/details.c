#include <stdio.h>
#include <string.h>

void details(char name[],int age,char email[]){
  printf("%s\n",name);
  printf("%d\n",age);
  printf("%s\n",email);
}
int main(){
  details("jahid hasan",23,"jhjahidhasanar@gmail.com");
  details("asha mony",22,"ashamony@gmail.com");
}

