#include <stdio.h>

struct employee {

  int code;
  char name[20];
  int salary;

};

int main()	{

  // initialising the struct

  struct employee rahul = {1001, "Rahul Pandey", 150000};

  // printing the values

  printf("Name : %s\n", rahul.name);
  printf("Code : %d\n", rahul.code);
  printf("Salary : %d\n", rahul.salary);

return 0;

}