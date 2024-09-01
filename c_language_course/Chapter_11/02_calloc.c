#include <stdio.h>
#include <stdlib.h>

int main()	{

  int n;

  printf("Enter the size of the array : ");
  scanf("%d", &n);

  int* ptr;
  ptr = (int*) calloc(n, sizeof(int));

  for (int i = 0 ; i < n ; i++) {
    printf("%d. %d\n", i + 1, ptr[i]);
  }

  free(ptr);

return 0;

}