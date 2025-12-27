#include <stdio.h>
#include <locale.h>
void preencher(int numeros[]){
	for(int i = 0; i < 10; i++){
		printf("Informe o %3dº número: ", i + 1);
		scanf("%d", &numeros[i]);
	}
}

int buscar_numero(int numeros[], int buscar){
	int cont = 0;
	for(int i = 0; i < 10; i++){
		if(numeros[i] == buscar){
			cont++;
		}
	}
	return cont;	
}

int main(){
	setlocale(LC_ALL, "");
	int numeros[10], buscar, cont_final;
	
	preencher(numeros);
	printf("Informe um nº para busca: ");
	scanf("%d", &buscar);
	cont_final = buscar_numero(numeros, buscar);
	
	if(cont_final > 0){
		printf("O nº buscado apareceu %d vezes.\n", cont_final);
	}else{
		printf("O nº buscado não foi encontrado. ");
	}
	
	return 0; 
}
