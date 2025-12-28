#include <stdio.h>



int contagem(char nome[]){

	int  cont = 0;
	
	for(int i = 0; nome[i] != '\0'; i++){
		cont++;
	}

	return cont;
}

int main(){
	char nome[20];
	int caracter_total;
	
	printf("Informe seu nome: ");
	scanf("%19s", nome);
	caracter_total = contagem(nome);
	
	if(caracter_total > 10){
		printf("O nome: %s tem %d caracteres, mais que 10", nome, caracter_total);
	} else {
			printf("O nome: %s tem %d caracteres, menos que 10", nome, caracter_total);
	}
	
	return 0;
}
