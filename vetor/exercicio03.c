#include <stdio.h>
#include <locale.h>

/*3 - Selecionando números pares

Crie um programa que recebe 10 números inteiros do usuário e retorna um array com apenas os números pares.*/


void preencher_numeros(int numeros_usuario[]){

	for(int i = 0; i < 10; i++){
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numeros_usuario[i]);
	}	
}
int comparar_numeros(int numeros_usuario[], int numeros_pares[]){
	int cont_pares = 0;
	for(int i = 0; i < 10; i++){
		if(numeros_usuario[i] % 2 == 0){
			numeros_pares[cont_pares] = numeros_usuario[i];
			cont_pares++;
		}		
	}
	return cont_pares;
}
void mostrar_numeros_pares(int numeros_pares[], int cont_pares){

	if (cont_pares == 0) {
        printf("\nNenhum número par foi digitado.\n");
    }else{
	printf("Números pares encontrados.\n");
		for(int i = 0; i < cont_pares; i++){
			printf("%d ", numeros_pares[i]);
		}
		printf("\n");
	}
}
int main(){
	setlocale(LC_ALL, "");
	
	int numeros_usuario[10], numeros_pares[10], total_encontrado;
	
	preencher_numeros(numeros_usuario);
	total_encontrado = comparar_numeros(numeros_usuario, numeros_pares);
	mostrar_numeros_pares(numeros_pares, total_encontrado);
	return 0;
}
