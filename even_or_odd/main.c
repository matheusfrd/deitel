#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 2 == 0)
  {
    printf("The number %d is even.", number);
  }
  else
  {
    printf("The number %d is odd.", number);
  }
  return 0;
}