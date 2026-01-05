/*Exercício 2 — Validação e ajuste com ponteiros + while
Crie um programa em C que:
Declare duas variáveis inteiras x e y no main.
Leia os valores de x e y digitados pelo usuário.
Crie uma função chamada ajustar_valores que:
Receba dois ponteiros para int
Enquanto x for menor ou igual a zero, peça um novo valor para x
Enquanto y for menor ou igual a zero, peça um novo valor para y
Após a validação, a função deve garantir que:
x seja menor ou igual a y
Caso x > y, troque os valores (use ponteiros)
No main, exiba:
Os valores antes da chamada da função
Os valores depois da chamada da função*/

#include<stdio.h>
#include<locale.h>


void ajustar_valores(int *x, int *y){
	int temp;
	while(*x <= 0){
		printf("Informe um novo valor para x: ");
		scanf("%d", x);
	}
		while(*y <= 0){
		printf("Informe um novo valor para y: ");
		scanf("%d", y);
	}
	if(*x > *y){
		temp = *y;
		*y = *x;
		*x = temp;
	}
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
		
	int x, y;
	
	printf("Informe valor para x: ");
	scanf("%d", &x);
	
	printf("Informe valor para y: ");
	scanf("%d", &y);
	
	printf("\n--- Antes da função ---\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
	
	ajustar_valores(&x,&y);
	
	printf("\n--- Depois da função ---\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
	
	return 0;
}
