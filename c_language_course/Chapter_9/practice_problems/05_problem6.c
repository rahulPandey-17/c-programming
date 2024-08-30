// array of struct

typedef struct complex {
  int r, i;
} comp;

#include <stdio.h>

int main()	{

  comp numbers[5];

  // taking values from the user

  for (int i = 0 ; i < 5 ; i++) {

    printf("Enter the value of real part for %d number : ", i + 1);
    scanf("%d", &numbers[i].r);
    printf("Enter the value of imaginary part for %d number : ", i + 1);
    scanf("%d", &numbers[i].i);
    printf("\n");

  }

  // printing the values provided by the user

  for (int i = 0 ; i < 5 ; i++) {
    printf("%d. %d + %di\n", i, numbers[i].r, numbers[i].i);
  }

return 0;

}