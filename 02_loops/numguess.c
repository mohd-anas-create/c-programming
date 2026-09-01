#include<stdio.h>
int main()
{
  int num; int i=0;
  num= rand() % 100 + 1;
  int guess;
  printf("Guess the number between 1 and 100: ");
  scanf("%d", &guess);
  while(guess!=num)
  {
    printf("Wrong guess! Try again: ");
    scanf("%d", &guess);
    i++;
  }
  printf("Congratulations! You guessed the number correctly in %d attempts..\n", i);
}