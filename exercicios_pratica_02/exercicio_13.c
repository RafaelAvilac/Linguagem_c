/*Exercício 6 — Leitura até Zero

Enunciado (repetindo para foco)
Leia números inteiros do usuário até que ele digite 0.
Ao final, mostre:

quantos números foram digitados (o zero não conta)*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, cont = 0;
	
		do{
		
		printf("Informe um nº:  ");
		scanf("%d", &n);
		
		if(n != 0){
			cont++;
		}
		
	}while(n != 0);
	printf("Contagem %d", cont);
	return 0;
}
