#include <stdio.h>
#include <stdlib.h>

int main()	{

  int n = 5;

  // printf("Enter the size of the array : ");
  // scanf("%d", &n);

  // int arr[n]; // added this feature in c99

  float* ptr;
  ptr = (float*) malloc(n * sizeof(float));

  ptr[0] = 1.0;
  ptr[1] = 1.1;
  ptr[2] = 1.2;
  ptr[3] = 1.3;
  ptr[4] = 1.4;

  for (int i = 0 ; i < 5 ; i++) {
    printf("%f ", (ptr[i]));
  }

  printf("\n");

return 0;

}