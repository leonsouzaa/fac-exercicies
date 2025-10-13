/*QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/

#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}