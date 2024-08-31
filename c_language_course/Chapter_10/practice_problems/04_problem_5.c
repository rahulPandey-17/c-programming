#include <stdio.h>

int main()	{

  FILE* ptr;
  ptr = fopen("integer.txt", "r");
  int num;

  if (ptr == NULL) {
    printf("File does not exists!\n");
  }
  else {
    fscanf(ptr, "%d", &num);
  }

  fclose(ptr);

  ptr = fopen("integer.txt", "a");
  fprintf(ptr, "\nAfter doubling the value already present in the file we get : %d", 2 * num);

  fclose(ptr);

return 0;

}