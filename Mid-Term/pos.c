
#include <stdio.h>

int main()
{
  int n = 10, i, even = 0, odd = 0, positive = 0;
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      even++;
    } else {
      odd++;
    }
    if (i > 0) {
      positive++;
    }
  }
  printf("Even numbers: %d\n", even);
  printf("Odd numbers: %d\n", odd);
  printf("Positive numbers: %d\n", positive);

  return 0;
}
