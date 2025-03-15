#include <stdio.h>
#include <string.h>

int main() {
 
char fname[20];
char lname[20];
printf("Enter your firstName:\n");
fgets(fname,sizeof(fname),stdin);
printf("Enter your firstName:\n");
fgets(lname,sizeof(lname),stdin);
printf("hello %s %s",fname,lname);


}
