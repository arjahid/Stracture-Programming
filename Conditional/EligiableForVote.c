#include <stdio.h>
int main()
{
  int a;
  scanf("%d ",&a);
  if(a>18){
    printf("Congratulatio! You are eligiable for vote",a);
  }else{
    printf("Sorry you are not eligiable for vote",a);
  }
}