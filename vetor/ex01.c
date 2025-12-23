#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void preencher(int numeros[]){
	
	printf("Faça sua aposta de 6 numeros.\n");
	printf("Válido números de 1 a 60.\n\n");
	
 	for(int i = 0; i < 6; i++){
	
		printf("Informe o %dº palpite: ", i + 1);
		scanf("%d", &numeros[i]);
		
		while (numeros[i] <= 0 || numeros[i] > 60){
			printf("Numero invalido.\n");
			printf("Informe o %dº palpite: ", i + 1);
			scanf("%d", &numeros[i]);
		}
	}
}

void preencher_sorteados(int sorteados[]){
	for(int i = 0; i < 6; i++){
		sorteados[i] = rand() % 60 + 1;
	}
}

void exibir_palpite(int numeros[]){
	printf("Numeros escolhidos: ");
	for(int i = 0; i < 6; i++){
		printf("%d\t", numeros[i]);
	}	
	printf("\n");
}
void exibir_sorteados(int sorteados[]){
	printf("Numeros sorteados: ");
	for(int i = 0; i < 6; i++){
		printf("%d\t", sorteados[i]);
	}
		printf("\n");
}
int comparar_numeros(int numeros[], int sorteados[]){
	int cont = 0;
	for(int i = 0; i < 6; i++){         //numeros
		for(int j = 0; j < 6; j++){     //sorteados
			if(numeros[i] == sorteados[j]){
			cont++;
			}
		}
	}
	return cont;
}

int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int numeros[6], sorteados[6];
	
	printf("===== Mega Sena! =====\n");
	preencher(numeros);
		system("cls");
	exibir_palpite(numeros);
	preencher_sorteados(sorteados);
	exibir_sorteados(sorteados);
	printf("Você acertou %d numeros.", comparar_numeros(numeros, sorteados));
	return 0;
}
