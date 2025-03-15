#include <stdio.h>
#include <string.h>

int sum(int x,int y){
  return x+y;
}

int main(){
int result[5];
result[0]=sum(1,2);
result[1]=sum(5,2);
result[2]=sum(6,2);
result[3]=sum(7,2);
result[4]=sum(8,2);
for(int i=0;i<sizeof(result)/4;i++){
  printf("reult %d\n",result[i]);
}

}


    