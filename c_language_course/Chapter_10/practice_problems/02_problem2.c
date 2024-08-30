#include <stdio.h>

int main()	{

  FILE* ptr;
  ptr = fopen("table.txt", "w");

  if (ptr == NULL) {
    printf("Could not open file for reading\n");
    return 1;
  }

  int num;

  printf("Enter the number : ");
  scanf("%d", &num);

  int product = 1;

  fprintf(ptr, "The multiplication table of %d is :\n", num);
  
  for (int i = 1 ; i <= 10 ; i++) {
    
    product = num * i;
    fprintf(ptr, "%d x %d = %d\n", num, i, product);

  }

  fclose(ptr);

return 0;

}