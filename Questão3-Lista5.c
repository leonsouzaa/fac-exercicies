/************************************************************
QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.
***********************************************************/

#include <stdio.h>

int main() {
    int base, expoente;
    long long resultado = 1;

    printf("Digite a base (inteiro): ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Expoente deve ser um inteiro nao negativo.\n");
        return 1;
    }

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%d elevado a %d = %lld\n", base, expoente, resultado);

    return 0;
}