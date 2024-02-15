#include <stdio.h>


int main(){
  char line[100];
  int celsius;
  float fahr;


  printf("Celsius: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &celsius);

  fahr = (1.8 * celsius) + 32;

  printf("%d celsius in fahrenheit is %.2f\n", fahr);

  return 0;

}
