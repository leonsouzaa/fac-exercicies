/* QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B. */

#include <stdio.h>

void exibirMultiplos(int n, int a, int b) {
    printf("Múltiplos de %d entre %d e %d:\n", n, a, b);
    for (int i = a; i <= b; i++) {
        if (i % n == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}