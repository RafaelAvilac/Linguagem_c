#include <stdio.h>
#include <locale.h>

int verificar_carac(char nome[], char carac){

	int cont = 0;
	
	for(int i = 0; nome[i] != '\0'; i++){
	
		if(nome[i] == carac){
			cont++;
		}
	}
	return cont;
}

int main(){
	setlocale(LC_ALL, "");
	char nome[15], carac;
	int cont_total;
	printf("Informe um nome: ");
	scanf("%s", nome);
	
	printf("Informe um caractere para busca: ");
	scanf(" %c", &carac);
	cont_total = verificar_carac(nome, carac);
	
	if(cont_total > 0){
		
		printf("O caractere %c aparece %d vezes na palavra.\n", carac, cont_total);
		
	}else{
		
			printf("O caractere %c não aparece na palavra.\n", carac);
		
	}
	
	
	return 0; 
}
