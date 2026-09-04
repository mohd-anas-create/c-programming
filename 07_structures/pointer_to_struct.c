#include <stdio.h>
#include <string.h>
struct employee{
  int code;
  char name[20];
  float salary;
};
int main()
{
  struct employee e1;
  e1.code = 56;
  strcpy(e1.name, "anas");
  e1.salary = 72;
  struct employee *ptr;
  ptr = &e1;
  printf("%u\n",ptr);
 // printf("%d\n %s\n %f\n", (*ptr).code, (*ptr).name, (*ptr).salary); 
  printf("%d\n %s\n %f\n", ptr->code, ptr->name, ptr->salary); /* does the same thing as the upper line's code*/
  return 0;
  
}