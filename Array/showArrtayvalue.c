#include <stdio.h>
int main (){
    int num[]={1,2,4,5,6,7,8,9,10};
    for(int i=0;i<sizeof(num)/4;i++){
        printf("%d\n",num[i]);
    }
}