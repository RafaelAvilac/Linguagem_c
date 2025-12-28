#include <stdio.h>
#include <locale.h>


int verificar_caractere(char nome[], char caracter){
	
	for(int i = 0; nome[i] != '\0'; i++){
		if(nome[i] == caracter){
			return 1;
		}
			
	}
		return 0;
}

int main(){
	setlocale(LC_ALL, "");
	char nome[15], caracter;
	
	printf("Informe um nome: ");
	scanf("%14s", nome);
	
	printf("Informe o caractere para busca: ");
	scanf(" %c", &caracter);
	
	if(verificar_caractere(nome, caracter)){
		printf("O %c digitado existe na string.\n", caracter);
	}else{
		printf("O %c digitado não existe na string.\n", caracter);
	}
	
	return 0;
}
