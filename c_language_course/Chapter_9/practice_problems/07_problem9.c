#include <stdio.h>
#include <string.h>

typedef struct laptop {

  char name[20];
  char series[20];
  long price;

} Lap;

void compare_data(Lap l1, Lap l2) {

  if (strcmp(l1.name, l2.name) == 0) {
    printf("Both are of same companies\n");
  }
  
  if (strcmp(l1.series, l2.series) == 0) {
    printf("Both are of same companies\n");
  }
  
  if (l1.price == l2.price) {
    printf("Both are of same companies\n");
  }

}

int main()	{

  Lap l1, l2;

  strcpy(l1.name, "HP");
  strcpy(l1.series, "Gaming");
  l1.price = 85000;
  
  strcpy(l2.name, "HP");
  strcpy(l2.series, "Pavilion");
  l2.price = 75000;

  compare_data(l1, l2);

return 0;

}