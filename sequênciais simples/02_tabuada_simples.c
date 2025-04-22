// Fazer um programa em C que imprime uma tabela com a tabuada de un número especifico

#include <stdio.h>

int main() {

    int numero;

    printf("Informe o valor do numero da tabuada: ");
    scanf("%d", &numero); 

    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
