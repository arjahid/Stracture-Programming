#include <stdio.h>
int main(){
  int number[]={22,34,5,5,6,66,7,78,9,67,2};
  int length=sizeof(number)/sizeof(number[0]);
  int low=number[0];
  for(int i=0;i<length;i++){
    if(low>number[i]){
      low=number[i];
    }
  }
  printf("%d",low);
  
}