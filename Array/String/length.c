#include <stdio.h>
#include <string.h>

int main() {
char message[]="good to see you \'haha\' ";
int length=sizeof(message)/sizeof(message[0]);
printf("%d",length); 
// sizeof include 0 as a null char;
// strlen dont include 0;
int lengths=strlen(message);
printf("%d",lengths);


   
}
