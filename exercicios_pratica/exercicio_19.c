#include <stdio.h>
#include <locale.h>

#define TAM 4

/*Crie um programa em C que:

Leia uma matriz 4x4 de números inteiros
Verifique se a matriz é uma matriz identidade
Exiba:

"É matriz identidade" ou
"Não é matriz identidade"
Exiba a matriz formatada na tela*/
void preencher(int numeros[][TAM]){
	for(int i =  0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			printf("Informe um valor para o índice [%d][%d]: ", i, j);
			scanf("%d", &numeros[i][j]);
		}
	}
}
int verificar_tipo(int numeros[][TAM]){

	for(int i =  0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if(i == j){
				if(numeros[i][j] != 1){
					return 0;
				}
			}else{
				if(numeros[i][j] != 0){
					return 0;
				}
			}
		}
	}
	return 1;
}
void exibir_numeros(int numeros[][TAM]){
	printf("\nMatriz Formatada.\n");
	for(int i =  0; i < TAM; i++){
		printf("| ");
		for(int j = 0; j < TAM; j++){
			printf("%3d ", numeros[i][j]);
		}
	printf(" |\n");
	}
}
void limpar(){
	printf("\033[2J\033[H");
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[TAM][TAM];
	
	preencher(numeros);
	
	limpar();
	
	if(verificar_tipo(numeros)){
		printf("\nÉ matriz identidade.\n");
	}else{
		printf("\nNão é matriz identidade.\n");
	}
	exibir_numeros(numeros);
	
	
	return 0;
}
