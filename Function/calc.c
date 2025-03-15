#include <stdio.h>
#include <string.h>

void calclutor(int x,int y){
  int sum=x+y;
  int sub=x-y;
  int mul=x*y;
  int div=x/y;
  printf("The sum of %d and %d is:%d\n",x,y,sum);
  printf("The sub of %d and %d is:%d\n",x,y,sub);
  printf("The mul of %d and %d is:%d\n",x,y,mul);
  printf("The div of %d and %d is:%d\n",x,y,div);
}
int main(){
  calclutor(30,20);
}

