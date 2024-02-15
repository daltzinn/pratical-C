#include <stdio.h>


int main(){
  char line[100];
  int minutes;
  int hours;

  printf("Type the hours: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &hours);

  printf("Type the minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &minutes);

  int total = (60 * hours) + minutes;

  printf("Total: %i minutes\n", total);

  return 0;
}
