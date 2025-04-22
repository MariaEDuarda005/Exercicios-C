/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando a fórmula
C=(f-32.0) * (5.0/9.0).*/

#include <stdio.h>

int main() {

    float temperatura;

    printf("Digite o valor da temperatura em Fahrenheit: ");
    scanf("%f", &temperatura);

    float formula = (temperatura - 32.0) * (5.0/9.0);

    printf("Convertido para Celsius é: %.2f", formula);    

    return 0;
}
