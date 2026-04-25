// Created by rafae on 24/04/2026.
/*21. Fac¸a um programa que receba dois numeros. Calcule e mostre: ´
• a soma dos numeros pares desse intervalo de n ´ umeros, incluindo os n ´ umeros digi- ´
tados;
• a multiplicac¸ao dos n ˜ umeros ´ ´ımpares desse intervalo, incluindo os digitados;*/
#include <stdio.h>
int main() {
    int x, y, soma_par = 0, mult_impar = 1;
    printf("Digite numero de inicio:_");
    scanf("%d", &x);
    printf("Digite numero de fim:_");
    scanf("%d", &y);
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            soma_par += i;
        }
        if (i % 2 != 0) {
            mult_impar *= i;
        }
    }

    printf("Soma total: %d\n", soma_par);
    printf("Multiplicacao total: %d\n", mult_impar);

    return 0;
}
