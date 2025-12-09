#include <stdio.h>
#include <stdlib.h>
int main()
{
    int salario_1, salario_2, diferenca;

    printf("Informe o salario do primeior jogador: ");
    scanf("%d", &salario_1);
    printf("\nInforme o salario do segundo jogador: ");
    scanf("%d", &salario_2);

    diferenca = abs(salario_1-salario_2);

    printf("\nA diferenca e: %d", diferenca);


    return 0;
}