#include <stdio.h>
#include <string.h>
typedef struct employee
{
  int code;
  char name[20];

} emp;
int main()
{
  emp e1;
  strcpy(e1.name, "anas");
  e1.code = 18;
  printf("%s\n %d\n", e1.name, e1.code);
  return 0;
}