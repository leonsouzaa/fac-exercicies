// QUESTÃO 01: Faça um programa que leia
// um número inteiro x e, em seguida, solicite
// ao usuário outros 50 valores inteiros. Ao
// final, o programa deve exibir o total de
// múltiplos de x fornecidos. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, valor, count = 0;

    printf("Digite um numero inteiro (x): ");
    scanf("%d", &x);

    for (int i = 0; i < 50; i++) {
        printf("Digite o %d valor inteiro: ", i + 1);
        scanf("%d", &valor);

        if (valor % x == 0) {
            count++;
        }
    }

    printf("Total de multiplos de %d: %d\n", x, count);

    return 0;
}