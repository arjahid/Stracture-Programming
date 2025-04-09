#include <stdio.h>
void sum(int number[5]){
    for(int i=0;i<5;i++){
        printf("%d\n",number[i]);
    }
    
    
}

int main() {
    int myNumber[5]={22,31,434,44,555};
    
    sum(myNumber);

    return 0;
}