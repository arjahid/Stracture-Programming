#include <stdio.h>
#include <string.h>

int main() {
    char name[20]="jahid";
    char name2[20]="hasan";
    strcat(name,name2);
    int length=strlen(name);
    printf("%s\n",name);
    printf("%d",length);
    

    return 0;
}