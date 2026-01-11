/*Exercício 10 — Contagem de Pares e Ímpares no Vetor
Enunciado
Usando o mesmo vetor:
Conte quantos números são pares
Conte quantos números são ímpares*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10


 int main(void){
 	setlocale(LC_ALL, "");
 	srand(time(NULL));
 	
 	int numeros[10], par = 0, impar = 0;	
	
	for(int i = 0; i < TAM; i++){
		numeros[i] = rand() % 100 + 1;	
	}	
	
	printf("Vetor preenchido.\n");
	for(int i = 0; i < TAM; i++){
		printf("%3d\t", numeros[i]);
		if(numeros[i] % 2 == 0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("\n\n============== RESULTADO ==============\n");
	printf("Total de %3d pares\nTotal de %3d impare\n", par, impar);
	 printf("======================================\n");
 	
 	return 0;
 }
