#include <stdio.h>

int main()
{
  int password=112233;
  int n;
  scanf("%d",&n);
  if(n==password){
    printf("Correct password");
  }
  else{
    printf("Wrong password");
  }

  return 0;
}
