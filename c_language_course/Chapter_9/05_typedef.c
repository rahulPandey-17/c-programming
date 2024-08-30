#include <stdio.h>
#include <string.h>

typedef struct employee {

  int code;
  char name[20];
  int salary;

} emp;

int main()	{

  emp e;

  // printing employee 'e' details

  printf("Name : %s\n", strcpy(e.name, "Rahul Pandey"));
  printf("Code : %d\n", e.code = 1001);
  printf("Salary : %d\n", e.salary = 200000);

return 0;

}