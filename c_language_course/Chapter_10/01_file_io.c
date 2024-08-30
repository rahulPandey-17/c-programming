#include <stdio.h>

int main()	{

  FILE* ptr;
  ptr = fopen("numbers.txt", "r");

  if (ptr == NULL) {
    printf("File does not exists!\n");
  }
  else {
    int num;
  
    fscanf(ptr, "%d", &num);
    printf("The value of the number is : %d\n", num);
  }

  fclose(ptr);

return 0;

}