#include <stdio.h>


char name[100] = "daltzin";
char birth[100] = "12/12/7777";
int security_number;

int main(){
  security_number = 22;
  printf("your name is %s , your security number is %i and your birth is %s\n", name, security_number, birth);
  return 0;
}
