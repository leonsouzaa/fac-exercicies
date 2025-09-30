/************************************************************
QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.
***********************************************************/

#include <stdio.h>

int main() {
    int n, valor, maior, menor;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
        return 1;
    }

    printf("Digite o 1 valor: ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;

    for (int i = 1; i < n; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
