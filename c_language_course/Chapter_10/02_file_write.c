#include <stdio.h>

int main()	{

  FILE* ptr;
  ptr = fopen("file.txt", "a");

  if (ptr == NULL) {
    printf("File does not exists\n");
  }
  else {

    char* name = "Rahul Pandey";
    fprintf(ptr, " %s", name);
    fclose(ptr);

  }

return 0;

}