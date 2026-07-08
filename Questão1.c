#include <stdio.h>


int contarAlgarismo(int alg, int n1, int n2) {
   
    if (alg < 0 || alg > 9) {
        printf("Erro: O algarismo deve estar entre 0 e 9.\n");
        return -1;
    }
   
    if (n1 > n2) {
        printf("Erro: n1 deve ser menor ou igual a n2.\n");
        return -1;
    }


    int count = 0;
   
    for (int i = n1; i <= n2; i++) {        
        int num = i;
       
        while (num > 0) {
            if (num % 10 == alg) {
                count++;
            }
            num /= 10;
        }
    }
   
    return count;
}


int main() {
    int alg, n1, n2;
   
    printf("Digite um algarismo (0-9): ");
    scanf("%d", &alg);
   
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
   
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
   
    int resultado = contarAlgarismo(alg, n1, n2);
   
    if (resultado != -1) {
        printf("O algarismo %d aparece %d vezes no intervalo [%d, %d].\n", alg, resultado, n1, n2);
    }
   
    return 0;
}
