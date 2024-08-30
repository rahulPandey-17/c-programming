#include <stdio.h>
#include <string.h>

typedef struct account {

  char name[20];
  int accno;
  char acc_type[20];
  long phoneNo;
  double balance;

} Acc;

int main()	{

  // using same line initialization 

  Acc c1 = {"Rahul Pandey", 1542368765, "Savings", 6364079215, 7000000};

  // using dot operator

  Acc c2;

  strcpy(c2.name, "Alok Kumar Singh");
  c2.accno = 1457896432;
  strcpy(c2.acc_type, "Savings");
  c2.phoneNo = 8965743264;
  c2.balance = 7200000;

  // using arrow operator

  Acc c3;

  Acc* ptr = &c3;

  strcpy(ptr -> name, "Harshit Shukla");
  strcpy(ptr -> acc_type, "Savings");
  ptr -> accno = 1854216874;
  ptr -> phoneNo = 9658754123;
  ptr -> balance = 7000000;

  // printing the above values

  // c1

  printf("Name : %s\n", c1.name);
  printf("Acc. Type : %s\n", c1.acc_type);
  printf("Acc. No. : %d\n", c1.accno);
  printf("Balance : %.2lf\n", c1.balance);
  printf("Phone No. : %ld\n", c1.phoneNo);
  printf("\n");
  
  // c2

  printf("Name : %s\n", c2.name);
  printf("Acc. Type : %s\n", c2.acc_type);
  printf("Acc. No. : %d\n", c2.accno);
  printf("Balance : %.2lf\n", c2.balance);
  printf("Phone No. : %ld\n", c2.phoneNo);
  printf("\n");
  
  // c3

  printf("Name : %s\n", c3.name);
  printf("Acc. Type : %s\n", c3.acc_type);
  printf("Acc. No. : %d\n", c3.accno);
  printf("Balance : %.2lf\n", c3.balance);
  printf("Phone No. : %ld\n", c3.phoneNo);
  printf("\n");

return 0;

}