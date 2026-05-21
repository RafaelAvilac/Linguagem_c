/*Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, 
um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. 
A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, 
demonstrando os elementos que deverão ser considerados na operação.
*/
#include <stdio.h>

int main() {
    int L;
    char T;
    double matriz[12][12];
    double soma = 0.0, resultado;
    
    // Leitura da linha e da operação
    scanf("%d", &L);
    scanf(" %c", &T);
    
    // Leitura dos 144 valores da matriz
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    // Soma dos elementos da linha L
    for(int j = 0; j < 12; j++) {
        soma += matriz[L][j];
    }
    
    // Verifica a operação
    if(T == 'S') {
        resultado = soma;
    } else if(T == 'M') {
        resultado = soma / 12.0;
    }
    
    // Imprime o resultado com 1 casa decimal
    printf("%.1lf\n", resultado);
    
    return 0;
}
