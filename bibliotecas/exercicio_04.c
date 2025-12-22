#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	char nome[50];
	int cont_str = 0, cont_caracter = 0;
	printf("informe o nome de usuário: ");
	scanf("%s", nome);
	cont_str = strlen(nome);
	
	for(int i = 0; i < cont_str; i++){
		if(nome[i] == '@' || nome[i] == '#' || nome[i] == '$' || nome[i] == '%' || nome[i] == '!'){
			cont_caracter++;
		}
	}
	if(cont_caracter == 0){
		printf("Nome válido.\nPossui %d caracteres.\n", cont_str);
	}else{
		printf("Nome inválido.\nPossui %d caracteres não permitidos de um total de %d caracteres.\n", cont_caracter, cont_str);
	}
		
	return 0;
}
