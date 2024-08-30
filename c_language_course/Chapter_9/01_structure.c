#include <stdio.h>
#include <string.h>

// declaring a struct

struct employee {

  int code;
  char name[20];
  int salary;

};

int main()	{

  struct employee e1, e2;

  strcpy(e1.name, "Rahul Pandey");
  e1.code = 1001;
  e1.salary = 86000;

  // printing details

  printf("Employee name : %s\n", e1.name);
  printf("Employee cdoe : %d\n", e1.code);
  printf("Employee salary : %d\n", e1.salary);

return 0;

}