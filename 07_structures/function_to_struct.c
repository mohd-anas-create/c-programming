#include <stdio.h>
#include <string.h>
struct employee
{
  int code; 
  char name[40];
  float salary;
};
void info(struct employee e1);
void info(struct employee e1)
{
  printf("Employee code: %d\n Employee name: %s\n Employee salary: %f\n", e1.code, e1.name, e1.salary);

}
int main()
{
  struct employee e1;
  e1.code= 18;
  strcpy(e1.name, "anas");
  e1.salary=54;
  info(e1);
  return 0;
}
