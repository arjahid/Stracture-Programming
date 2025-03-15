#include <stdio.h>
#include <string.h>

void passArray(int myNumber[]){
  for(int i=0;i<5;i++){
    printf("%d\n",myNumber[i]);
  }

}
int main(){
  int myNumber[5]={1,2,3,4,5};
  passArray(myNumber);
}

