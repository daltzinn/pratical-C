#include <stdio.h>
#include <math.h>

const float PI = 3.141592653;

int main(){
  char line[100];
  float volume;
  float radius;

  printf("Type the radius of the sphere: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &radius);

  volume = (4.0 / 3.0) * PI * pow(radius, 3);

  printf("The volume is %.2f\n", volume);

  return 0;

}
