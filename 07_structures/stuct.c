#include <stdio.h>
#include <string.h>
struct employee
{
  char name[40];
  int age;
  float salary;
};
int main()
{
  struct employee e1;
  strcpy(e1.name, "anas");
  e1.age = 19;
  e1.salary = 54;
  printf("%s\n %d\n %f\n", e1.name, e1.age, e1.salary);
  return 0;
}
