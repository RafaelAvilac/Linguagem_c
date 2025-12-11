#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario_1, salario_2, diferenca;

    printf("Informe o salario do primeior jogador: ");
    scanf("%f", &salario_1);
    printf("\nInforme o salario do segundo jogador: ");
    scanf("%f", &salario_2);

    diferenca = abs(salario_1-salario_2);

    printf("\nA diferenca e: %.2f", diferenca);


    return 0;
}
