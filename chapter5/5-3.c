#include <stdio.h>


int main(){
  char line[100];
  float heigth;
  float width;
  float perimeter;

  printf("Type the heigth: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &heigth);

  printf("Type the width: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &width);

  perimeter = 2 * (heigth + width);

  printf("The perimeter of this rectangle is %.2f\n", perimeter);

  return 0;

}
