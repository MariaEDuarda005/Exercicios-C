// Fazer um programa em C que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros

#include <stdio.h>

int main() {
    float metros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros); // é como o input do python 

    float decimetros = metros * 10;
    float centimetros = metros * 100;
    float milimetros = metros * 1000;

    printf("\nEquivalente em:\n");
    printf("Decímetros: %.2f dm\n", decimetros);
    printf("Centímetros: %.2f cm\n", centimetros);
    printf("Milímetros: %.2f mm\n", milimetros);

    return 0;
}
