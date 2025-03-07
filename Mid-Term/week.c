#include <stdio.h>

int main() {
    int week;
    scanf("%d",&week);
    switch(week){
      case 1:printf("saturday");
      break;
      case 2:printf("sunday");
      break;
      case 3:printf("monday");
      break;
      case 4:printf("Tuesday");
      break;
      case 5:printf("wednessday");
      break;
      case 6:printf("Thirsday");
      break;
      case 7:printf("fridaty");
      break;
      default:printf("invalid input");
      
    }
}
