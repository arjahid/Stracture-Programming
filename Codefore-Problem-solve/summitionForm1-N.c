#include <stdio.h>
int main(){
    int sum=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The summation of 1 to %d is %d\n",n,sum);
}