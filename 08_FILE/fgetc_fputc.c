#include <stdio.h>
int main()
{
  FILE *fptr;
  fptr = fopen("text.txt", "a");
  char c = fgetc(fptr);
   printf("%c", c);
 // fputc('c', fptr);
 // fclose(fptr);
  return 0;
}