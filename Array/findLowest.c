#include <stdio.h>
int main(){
  int ages[]={11,22,32,22,23,24,25,24,23,33,33,44,45};
  int length=sizeof(ages)/4;
  int lowest=ages[0];
  for(int i=1;i<length;i++){
    if(lowest>ages[i]){
      lowest=ages[i];
    }
  }
  printf("%d",lowest);
}