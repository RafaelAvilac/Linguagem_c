/*22. Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequencia arbitr � aria de notas (v � alidas no intervalo de 10 a 20) e que mostre na tela, �
como resultado, a correspondente media aritm � etica. O n � umero de notas com que o aluno �
pretenda efetuar o calculo n � ao ser � a fornecido ao programa, o qual terminar � a quando for �
introduzido um valor que nao seja v � alido como nota de aprovac� � ao.*/
// Created by rafael on 24/04/2026.

#include <stdio.h>
int main () {
    float n, media = 0, soma = 0, cont = 0;
    
    do{
        printf("Digite a nota: ");
        scanf("%f", &n);
        if(n >= 10 && n <= 20){
			soma += n;
        cont++;
		}  
    }while (n >= 10 && n <= 20);

    if (soma >= 10) {
        media = soma/cont;
       printf("Media: %.2f", media);
    }
    return 0;
}
