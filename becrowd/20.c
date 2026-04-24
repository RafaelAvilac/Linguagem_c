/*20. Ler uma sequencia de n ˆ umeros inteiros e determinar se eles s ´ ao pares ou n ˜ ao. Dever ˜ a´
ser informado o numero de dados lidos e n ´ umero de valores pares. O processo termina ´
quando for digitado o numero 1000.*/
#include <stdio.h>
#include <locale.h>
int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, pares = 0, cont = 0;
    while (n != 1000) {
        printf("Digite um numero: ");
        scanf("%d", &n);
            if (n % 2 == 0) {
                printf("%d eh par\n", n);
                pares++;
            }else {
                printf("%d eh impar\n", n);
            }
        cont++;
    }
    printf("Pares: %d\n", pares);
    printf("Total: %d\n", cont);
  return 0;
}