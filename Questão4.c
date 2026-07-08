#include <stdio.h>

float calcular_media(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}   

int contar_maiores_menores(int vetor[], int tamanho, float media, int *maiores, int *menores) {
    *maiores = 0;
    *menores = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            (*maiores)++;
        } else if (vetor[i] < media) {
            (*menores)++;
        }
    }
    return 0;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    float media = calcular_media(vetor, tamanho);
    
    int maiores, menores;
    contar_maiores_menores(vetor, tamanho, media, &maiores, &menores);
    
    printf("Média: %.2f\n", media);
    printf("Quantidade de valores maiores que a média: %d\n", maiores);
    printf("Quantidade de valores menores que a média: %d\n", menores);
    
    return 0;
}
