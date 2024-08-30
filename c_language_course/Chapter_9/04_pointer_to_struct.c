#include <stdio.h>
#include <string.h>

struct employee {

  int code;
  char name[20];
  int salary;

};

int main()	{

  // decalring a pointer to the structure

  struct employee* ptr;
  
  // creating a instance of the struct

  struct employee e1;
  ptr = &e1;

  strcpy(e1.name, "Rahul Pandey");
  e1.code = 1001;
  e1.salary = 200000;

  // printing the values

  printf("Name : %s\n", (*ptr).name);
  printf("Code : %d\n", (*ptr).code);
  printf("Salary : %d\n", (*ptr).salary);

return 0;

}