#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float produto = num1 * num2;
    float diferenca = num1 - num2;
    float quociente = 0.0;
    int resto = 0;

    if ((int)num2 != 0) {
        quociente = num1 / num2;
        resto = (int)num1 % (int)num2;
    } else {
        printf("A divisao por zero nao e permitida.\n");
    }

    printf("Soma: %.2f\n", soma);
    printf("Produto: %.2f\n", produto);
    printf("Diferenca: %.2f\n", diferenca);
    if ((int)num2 != 0) {
        printf("Quociente: %.2f\n", quociente);
        printf("Resto da divisao: %d\n", resto);
    }

    return 0;
}
