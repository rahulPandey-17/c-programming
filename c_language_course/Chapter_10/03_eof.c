#include <stdio.h>
#include <stdbool.h>

int main()	{

  FILE* ptr;
  ptr = fopen("file.txt", "r");

  if (ptr == NULL) {
    printf("File does not exists!\n");
  }
  else {

    char ch;

    while ((ch = fgetc(ptr)) != EOF) {
      printf("%c", ch);
    }

  }

  printf("\n");

  fclose(ptr);

return 0;

}