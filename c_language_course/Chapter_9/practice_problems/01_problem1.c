#include <stdio.h>

typedef struct vector {
  int i, j;
} vector;

int main()	{

  vector v = {5, 8};

  printf("The two dimensional we have is : %di + %dj\n", v.i, v.j);

return 0;

}