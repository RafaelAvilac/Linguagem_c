#include <stdio.h>
#include <locale.h>
void preencher(int numeros[]){
	for(int i = 0; i < 10; i++){
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	printf("\n");
}
int verificar_paridade(int numeros[], int pares[]){
	int cont = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] % 2 == 0){
			pares[cont] = numeros[i];
			cont++;
		}
	}
	return cont;
}
void exibir_pares(int pares[], int cont_pares){

	printf("Total de %d números positívos.\n", cont_pares);
	for(int i = 0; i < cont_pares; i++){
		printf("%d\t", pares[i]);
	}
    printf("\n");
}

int main(){
	setlocale(LC_ALL, "");
	int numeros[10], pares[10], cont_pares;
	
	preencher(numeros);
	cont_pares = verificar_paridade(numeros, pares);
    exibir_pares(pares, cont_pares);

	return 0;
}
