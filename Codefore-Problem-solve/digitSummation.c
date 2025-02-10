#include <stdio.h>
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int newNum=a %10 + b%10;
    printf("The summation of last digit of two numbers is %d\n",newNum);
    
}