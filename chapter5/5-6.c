#include <stdio.h>


int main(){
  char line[100];
  int minutes;
  int minutes_h;
  int hours;
  

  printf("Type the minutes: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &minutes);

  hours = (minutes / 60);
  minutes_h = (minutes % 60);

  printf("%i hour and %i minutes\n", hours, minutes_h);

  return 0;

}
