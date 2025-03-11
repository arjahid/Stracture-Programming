#include <stdio.h>
int main (){
   int number[]={1,2,3,4,5,6,7};
   int length=sizeof(number)/4;
   for(int i=0;i<length;i++){
     printf("%d\n",number[i]);
   }
   printf("Length of array is:%d",length);
}