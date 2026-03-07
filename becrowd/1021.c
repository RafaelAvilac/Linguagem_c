/*Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis 
são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 = N = 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, 
conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.*/

#include <stdio.h>


int main(void) {
    double valor;
    int resto, notas, moedas, centavos;

    scanf("%lf", &valor); //ler valor do usuário

    // Converter tudo para centavos para evitar erros de ponto flutuante
    centavos = (int) (valor * 100 + 0.5);
    resto = centavos;

    printf("NOTAS:\n");

    notas = resto / 10000;
    resto %= 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);

    notas = resto / 5000;
    resto %= 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);

    notas = resto / 2000;
    resto %= 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);

    notas = resto / 1000;
    resto %= 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);

    notas = resto / 500;
    resto %= 500;
    printf("%d nota(s) de R$ 5.00\n", notas);

    notas = resto / 200;
    resto %= 200;
    printf("%d nota(s) de R$ 2.00\n", notas);

    printf("MOEDAS:\n");

    moedas = resto / 100;
    resto %= 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);

    moedas = resto / 50;
    resto %= 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);

    moedas = resto / 25;
    resto %= 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);

    moedas = resto / 10;
    resto %= 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);

    moedas = resto / 5;
    resto %= 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);

    printf("%d moeda(s) de R$ 0.01\n", resto);

    return 0;
}

