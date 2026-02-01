/*Tabuada no Vetor
O Desafio dos Índices: Em C, se você cria um vetor de tamanho 10 (int v[10]), os "gavetas" disponíveis vão do número 0 até o 9.
Se você tentar acessar v[10], seu programa pode travar (Segmentation Fault) ou ler lixo de memória.

Enunciado:

Peça ao usuário um número inteiro.
Declare um vetor: int tabuada[10];.

Laço 1 (Preenchimento): Calcule a tabuada de 1 a 10, mas não mostre nada na tela. Apenas guarde os resultados dentro do vetor.
Atenção: O resultado de "número x 1" deve ir na posição 0. O de "número x 2" na posição 1, e assim por diante.
Laço 2 (Exibição): Percorra o vetor e mostre a tabuada formatada (N x 1 = R).
Dica de Lógica: Você pode fazer o for ir de 0 a 9 (usando i como índice) e multiplicar por i+1 na hora da conta.*/
#include <stdio.h>
#include <locale.h>

#define TAM 10

void receber_numero(int *n){
	
	printf("Informe um número: ");
	while(scanf("%d", n) != 1){
		printf("Digite apenas números: ");
		scanf("%d", n);
		while(getchar() != '\n');
	}
}
void preencher_v(int *v, int n){
	
	for(int i = 0; i < TAM; i++){
		v[i] = n * (i + 1);
	}
}
void exibir(int *v, int n){
	
	 printf("\n----------------------\n");
    printf("     TABUADA DO %d\n", n);
    printf("----------------------\n");

	for(int i = 0; i < TAM; i++){
		printf("%3d x %3d = %3d\n", n, i +1, v[i]);
	}
	printf("----------------------\n");
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n;
	int v[TAM];
	
	receber_numero(&n);
	preencher_v(v,n);
	exibir(v,n);
	
	return 0;
}
