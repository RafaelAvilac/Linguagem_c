#include <stdio.h>
#include <locale.h>


void preencher_numeros(int numeros[]){
	
	for(int i = 0;  i < 10; i++){
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numeros[i]);
	}	
}
int verificar_numeros(int numeros[]){
	for(int i = 0; i < 10; i++){
		if(numeros[i] < 0){
		
			return 0;
		}	
	}
		return 1;
}

int main(){
	setlocale(LC_ALL, "");
	int numeros[10]; 
	preencher_numeros(numeros);
	if(verificar_numeros(numeros)){
		printf("\n\nTodos os números são positivos");
	}else{
		printf("Existe pelo menos um número negativo");
	}
	return 0;
}
