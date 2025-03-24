#include <stdio.h>
int main()
{
   int arry[2][3];
   for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
       arry[i][j]=(i+1)*(j+1);
     }
   }
   for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
       printf("%d ",arry[i][j]);
     }
     printf("\n");
   }
   
}