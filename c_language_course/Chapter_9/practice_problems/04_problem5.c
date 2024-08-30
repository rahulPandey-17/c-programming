// program to represent a complex number using structs

#include <stdio.h>

typedef struct complex {
  int r, i;
} comp;

int main()	{

  comp num1 = {2, 5};

  printf("The complex number we have is : %d + %di\n", num1.r, num1.i);

return 0;

}