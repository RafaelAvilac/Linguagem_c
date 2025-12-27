#include <stdio.h>
#include <locale.h>

void preencher(int numeros[]){
	
	for(int i = 0; i < 10; i++){
		printf("Informe o %3dº numero: ", i + 1);
		scanf("%d", &numeros[i]);
	}
}
int buscar_numero(int numeros[], int buscar){
	
	for(int i = 0; i < 10; i++){
		if(numeros[i] == buscar){
			return 1;
			break;
		}
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "");
	
	int numeros[10], buscar;
	
	preencher(numeros);
	printf("Qual número deseja buscar: ");
	scanf("%d", &buscar);
	
	if(buscar_numero(numeros, buscar)){
		printf("Nº %d, encontrado.\n", buscar);
	}else{
		printf("Nº %d, não encontrado.\n", buscar);
	}
	
	
	return 0;
}
