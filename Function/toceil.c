#include <stdio.h>
#include <string.h>

float toCeil(float farenhite){
   return (5.0 / 9.0) * (farenhite - 32.0);
}
int main(){

float fvalur=98.8;
float result=toCeil(fvalur);
printf("%.2f",result);

}


    

