#include <stdio.h>

int main(){
  int width = 3;
  int heigth = 5;
  int area = width * heigth;
  int perimeter = width * 2 + heigth * 2;
  float width_f = 6.8;
  float length_f = 2.3;
  float area_f = width_f * length_f;
  float perimeter_f = width_f * 2 + length_f * 2;

  printf("The area is %i\n", area);
  printf("The perimeter is %i\n", perimeter);

  printf("The area is %f\n", area_f);
  printf("The perimeter is %f\n", perimeter_f);

  return 0;


}
