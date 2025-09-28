// QUESTÃO 05 - LISTA 1 
#include <stdio.h>  

int main (){

    int valor;

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);    

    if (valor >= 100){
        printf("Notas de 100: %d\n", valor / 100);
        valor = valor % 100;
    }
    
        if (valor >= 50){
            printf("Notas de 50: %d\n", valor / 50);
            valor = valor % 50;
        }

            if (valor >= 20){
                printf("Notas de 20: %d\n", valor / 20);
                valor = valor % 20;
            }

                if (valor >= 10){
                    printf("Notas de 10: %d\n", valor / 10);
                    valor = valor % 10;
                }

                    if (valor >= 5){
                        printf("Notas de 5: %d\n", valor / 5);
                        valor = valor % 5;
                    }

                        if (valor >= 2){
                            printf("Notas de 2: %d\n", valor / 2);
                            valor = valor % 2;
                        }

                            if (valor >= 1){
                                printf("Notas de 1: %d\n", valor / 1);
                                valor = valor % 1;
                            }

    return 0;

}