#include <stdio.h>
int main(){
  int math,phy,che,total;
  scanf("%d,%d,%d",&math,&phy,&che);
  total=math+phy+che;
  int total1=math+phy;
  
  if(math>=65 & phy>=55 & che>=50 & total>=190){
    printf("selected");
  }
  else if(total1>=140){
    printf("selected cota");
  }
  else {
    printf("not eligiable");
  }
   
}