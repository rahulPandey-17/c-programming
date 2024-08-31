#include <stdio.h>

typedef struct employee {

  char name[20];
  int salary;

} Emp;

int main()	{

  FILE* ptr;
  ptr = fopen("Employee.txt", "w");

  if (ptr == NULL) {
    printf("Cannot open file!\n");
  }
  else {

    Emp e1, e2;

    printf("Enter the name of first employee : ");
    scanf("%s", e1.name);
    printf("Enter the salary of first employee : ");
    scanf("%d", &e1.salary);

    printf("Enter the name of second employee : ");
    scanf("%s", e2.name);
    printf("Enter the salary of second employee : ");
    scanf("%d", &e2.salary);

    fprintf(ptr, "The details of the two employees are given below\n");
    fprintf(ptr, "i. %s %d\n", e1.name, e1.salary);
    fprintf(ptr, "ii. %s %d\n", e2.name, e2.salary);

  }

  fclose(ptr);

return 0;

}