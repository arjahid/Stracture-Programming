#include <stdio.h>
int main()
{
  
  int arr1[2][3],arr2[2][3],sum[2][3];
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&arr1[i][j]);
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&arr2[i][j]);
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      sum[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      printf("%d ",sum[i][j]);
    }
    printf("\n");
  }
   
}