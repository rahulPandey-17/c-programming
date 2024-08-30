#include <stdio.h>
#include <string.h>

struct employee {

  int code;
  char name[20];
  int salary;

};

int main()	{

  struct employee e1, e2, e3;

  // for employee 1
  
  printf("Enter employee name(1) : ");
  scanf("%s", e1.name);
  printf("Enter employee code(1) : ");
  scanf("%d", &e1.code);
  printf("Enter employee salary(1) : ");
  scanf("%d", &e1.salary);
  printf("\n");

  // for employee 2
  
  printf("Enter employee name(2) : ");
  scanf("%s", e2.name);
  printf("Enter employee code(2) : ");
  scanf("%d", &e2.code);
  printf("Enter employee salary(2) : ");
  scanf("%d", &e2.salary);
  printf("\n");

  // for employee 3
  
  printf("Enter employee name(3) : ");
  scanf("%s", e3.name);
  printf("Enter employee code(3) : ");
  scanf("%d", &e3.code);
  printf("Enter employee salary(3) : ");
  scanf("%d", &e3.salary);
  printf("\n");

  // printing the values for above inputs

  printf("You have entered the following details :\n\n");

  printf("Employee name(1) : %s\n", e1.name);
  printf("Employee code(1) : %d\n", e1.code);
  printf("Employee salary(1) : %d\n\n", e1.salary);

  printf("Employee name(2) : %s\n", e2.name);
  printf("Employee code(2) : %d\n", e2.code);
  printf("Employee salary(2) : %d\n\n", e2.salary);

  printf("Employee name(3) : %s\n", e3.name);
  printf("Employee code(3) : %d\n", e3.code);
  printf("Employee salary(3) : %d\n\n", e3.salary);


return 0;

}