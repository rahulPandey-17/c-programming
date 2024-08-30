#include <stdio.h>

typedef struct vector {
  int i, j;
} vector;

void sumVectors(vector v1, vector v2) {

  printf("The sum of the given two vectors is : %di + %dj\n", (v1.i + v2.i), (v1.j + v2.j));

}

int main()	{

  vector v1 = {8, 4};
  vector v2 = {12, 15};

  // passing the vectors to the function

  sumVectors(v1, v2);

return 0;

}