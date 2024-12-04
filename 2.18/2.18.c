#include <stdio.h>

int main() {

    int numero1, numero2;

    printf("Digite o primeiro numero: " );
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
            printf("%d e maior que o numero\n", numero1);
    if(numero2 > numero1)
            printf("%d e maior que o numero\n", numero2);
    if(numero1 == numero2)
            prinf("Esses numeros são iguais\n");

    return 0;
}
