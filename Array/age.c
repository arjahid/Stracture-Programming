#include <stdio.h>
int main (){
   int age[]={22,24,23,44,32,34,23,32,23,41};
   int sum=0,avg;
   int length=sizeof(age)/sizeof(age[0]);
   for(int i=0;i<length;i++){
     sum=sum+age[i];
     
   }
   avg=sum/length;
   printf("%d is the sum of age",sum);
   printf("\n%d is the avg of age",avg);
   
}