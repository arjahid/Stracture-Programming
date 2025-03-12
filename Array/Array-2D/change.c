#include <stdio.h>
int main(){
 int matrix[2][3]={{1,2,3},{3,4,5}};
 matrix[0][0]=100;
 matrix[1][0]=200;
 printf("%d\n",matrix[0][0]);
 printf("%d",matrix[1][0]);
  
}