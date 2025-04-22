/*ça um programa em "C" que lê dois valores e imprime:
 - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até
o segundo;
 - se o primeiro valor for menor que o segundo a lista de valores do segundo até
o primeiro em ordem decrescente;
 - se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &numero1); 

    printf("Informe o valor do segundo numero: ");
    scanf("%d", &numero2); 

    if (numero1 < numero2) {
        printf("Valores em ordem crescente: ");
        for (int i = numero1; i <= numero2; i++) {
            printf("%d ", i);
        }
    } else if (numero1 > numero2) {
        printf("Valores em ordem decrescente: ");
        for (int i = numero1; i >= numero2; i--) {
            printf("%d ", i);
        }
    } else {
        printf("valores iguais");
    }
    
    return 0;
} 