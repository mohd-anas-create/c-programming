#include <stdio.h>
int main(){
  FILE *fptr;
  fptr = fopen("text.txt", "r");
  if(fptr == NULL){
    printf("the file does not exist");
  }
  else{
  int num;
  fscanf(fptr, "%d", &num);
  printf("%d\n", num);
   fscanf(fptr, "%d", &num);
  printf("%d\n", num);
  fclose(fptr);
  }

  return 0;

}