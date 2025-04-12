#include <stdio.h>
#include <string.h>

int main() {
   int arr[]={1,2,3,4,5};
   int length=sizeof(arr)/4;
   int sum=0;
   
   for(int i=0;i<length;i++){
       sum +=arr[i];
   }
   printf("%d",sum);

    return 0;
}