/*Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule
e imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida
deve pertencer ao intervalo de 0 a 10). Cada nota deve ser validada separadamente.*/

#include <stdio.h>

int main(void){
	
	float n1, n2, soma_n1 = 0, soma_n2 = 0;
	
	
	for(int i = 1; i <= 6; i++){
	
		printf("\nInforme a primeira nota: ");
		scanf("%f", &n1);

		while(n1 < 0 || n1 > 10){
			printf("Informe a primeira nota: ");
			scanf("%f", &n1);
		}
		soma_n1 += n1;

		printf("\nInforme a segunda nota: ");
		scanf("%f", &n2);
		
		while(n2 < 0 || n2 > 10){
			printf("Informe a segunda nota: ");
			scanf("%f", &n2);
		}
		soma_n2 += n2;
	}
	
	float media = (soma_n1 + soma_n2) / 6;
	
	printf("Media: %.2f ", media );
	
	return 0;
}
