/*Fazer um programa em "C" que solicite 2 números e informe:
 a) A soma dos números;
 b) O produto do primeiro número pelo quadrado do segundo;
 c) O quadrado do primeiro número;
 d) A raiz quadrada da soma dos quadrados;
 e) O seno da diferença do primeiro número pelo segundo;
 f) O módulo do primeiro número.*/

 #include <stdio.h>

int main() {

    int numero1, numero2;

    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &numero1); 

    printf("Informe o valor do segundo numero: ");
    scanf("%d", &numero2); 

    printf("\nsoma dos numeros: %d \n", numero1+numero2);

    printf("produto do primeiro numero pelo quadrado do segundo: %d \n", numero1 * (numero2*numero2));

    printf("quadrado do primeiro numero: %d \n", numero1*numero1);

    double soma_quadrados = (numero1 * numero1) + (numero2 * numero2);
    printf("raiz quadrada da soma dos quadrados: %.2f\n", sqrt(soma_quadrados));

    double diferenca = numero1 - numero2;
    printf("o seno da diferença do primeiro pelo segundo numero: %.2f \n", sin(diferenca));

    printf("modulo do primeiro numero: %.2f \n", fabs(numero1));
}
 