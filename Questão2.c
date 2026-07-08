#include <stdio.h>

int calculaExpressao(int vetor[], int tamanho) {
    if (tamanho == 0 || tamanho % 2 == 0) {
        return 0;
    }

    int resultado = vetor[0];

    for (int i = 1; i < tamanho; i += 2) {
        int operacao = vetor[i];
        int operando = vetor[i + 1];

        switch (operacao) {
            case 1:
                resultado += operando;
                break;
            case 2:
                resultado -= operando;
                break;
            case 3:
                resultado *= operando;
                break;
            case 4:
                if (operando == 0) {
                    printf("Erro: divisao por zero.\n");
                    return 0;
                }
                resultado /= operando;
                break;
            default:
                printf("Erro: operacao invalida.\n");
                return 0;
        }
    }

    return resultado;
}

int main() {
    int expressao[] = {7, 2, 3, 3, 4, 4, 2, 1, 3};
    int tamanho = sizeof(expressao) / sizeof(expressao[0]);
    int resultadoFinal = calculaExpressao(expressao, tamanho);
    
    printf("O resultado final da expressao e: %d\n", resultadoFinal);
    return 0;
}
