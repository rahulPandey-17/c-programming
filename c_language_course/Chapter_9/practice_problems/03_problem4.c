#include <stdio.h>
#include <string.h>

typedef struct student {

  char name[20];
  int rollno;
  int admno;

} S;

int main()	{

  S student1;
  S* ptr = &student1;

  strcpy(ptr -> name, "Rahul Pandey");
  ptr -> rollno = 17;
  ptr -> admno = 30960;

  // printing the above values

  printf("Name : %s\n", student1.name);
  printf("Roll No. : %d\n", student1.rollno);
  printf("Admission No : %d\n", student1.admno);

return 0;

}