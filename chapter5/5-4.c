#include <stdio.h>


int main(){
  char line[100];
  float km;
  float miles;

  printf("Type the km per hour: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &km);

  miles = km * 0.621371192;

  printf("%.2f km/h in mph is: %.2f\n", km, miles);

  return 0;

}
