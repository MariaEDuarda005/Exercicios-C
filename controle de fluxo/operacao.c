/*Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e
imprime o resultado da expressão:
<valor 1> <operador> <valor 2>*/

#include <stdio.h>

int main() {
    float valor1, valor2;
    char operador;

    printf("Digite o valor do numero 1: ");
    scanf("%f", &valor1); 

    printf("Digite o valor do numero 1: ");
    scanf("%f", &valor2); 

    printf("Digite o operador da conta: ");
    getchar();  // Para consumir o caractere de nova linha restante no buffer
    scanf("%c", &operador); 

    switch(operador){
        case '+':
            printf("Resultado: %.2f\n", valor1 + valor2);
            break;
        case '-':
            printf("Resultado: %.2f\n", valor1 - valor2);
            break;
        case '*':
            printf("Resultado: %.2f\n", valor1 * valor2);
            break;
        case '/':
            printf("Resultado: %.2f\n", valor1 / valor2);
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }
   
}
 