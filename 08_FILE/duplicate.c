#include <stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("content.txt", "r");
  FILE *fptr;
  fptr = fopen("copycontent.txt", "a");
  while(1)
  {
    char ch = fgetc(ptr);
    printf("%c", ch);
    fprintf(fptr, "%c", ch);
    if(ch==EOF){
      break;
    }
  }

  fclose(ptr);
  fclose(fptr);
  
  return 0;
}