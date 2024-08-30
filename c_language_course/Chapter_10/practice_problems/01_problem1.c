#include <stdio.h>

int main()	{

  FILE* ptr;
  ptr = fopen("file.txt", "r");

  if (ptr == NULL) {
    printf("File does not exists!\n");
  }
  else {

    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

    printf("I have read the following three numbers from the file\n");
    printf("%d %d %d\n", num1, num2, num3);

  }

  fclose(ptr);

return 0;

}