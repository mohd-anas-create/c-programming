#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number;
  printf("enter the number of scores:\n");
  scanf("%d", &number);
  int *ptr;
  ptr = calloc(number, sizeof(int));
  if(ptr==NULL){
    printf("memory allocation failed!");
    return 1;
  }
  printf("Enter scores:\n");
  for(int i = 0; i<number; i++)
  {
    scanf(" %d", &ptr[i]);
  }
  for(int i = 0; i < number; i++)
  {
    printf("Score #%d : %d\n", i+1, ptr[i]);
  }
  free(ptr);
  ptr = NULL;
  return 0;
}