/*Exercício 12 — Contagem de Ocorrências no Vetor

Enunciado
Modifique a lógica de busca para:
contar quantas vezes um número aparece no vetor
mostrar o resultado ao usuário

Regras:
Reaproveite seu código atual
Escolha uma abordagem:
retorno da função
ou ponteiro
Nada de variáveis globais*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10 

void preencher(int *numeros){
	
	for(int i = 0; i < TAM; i++){
		numeros[i] = rand() % 100 + 1;
	}
}
void exibir(int *numeros){
	printf("Vetor preenchido:\n");
	for(int i = 0; i < TAM; i++){
		printf("%3d ", numeros[i]);
	}
	printf("\n");
}
int busca(int *numeros, int buscar){
	
	int cont = 0;
	
	for(int i = 0; i < TAM; i++){
		if(numeros[i] == buscar){
		cont++;
		}
	}
	return cont;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeros[TAM], buscar, encontrado;
	
	preencher(numeros);
	exibir(numeros);
	
	printf("Informe um nº para buscar: ");
	scanf("%d", &buscar);
	
	encontrado = busca(numeros, buscar);
	
	if(encontrado > 0){
		printf("O nº %d existe no vetor, aparece %d vezes.\n", buscar, encontrado);
	}else{
		printf("O nº %d não existe no vetor.\n",buscar);
	}
	
	
	return 0;
}
