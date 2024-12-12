#include <stdio.h>

int main(void)
{
  float data;
  printf("Digite um numero float: ");
  scanf("%f", &data);
  printf("O numero inteiro = %d \n", (int)data);
  printf("A decimal = %f \n", data - (int)data);

  return 0;
}