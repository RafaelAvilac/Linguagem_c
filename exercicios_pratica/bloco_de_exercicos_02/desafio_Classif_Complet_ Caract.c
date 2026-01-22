/*DESAFIO — Classificador Completo de Caracteres (C)
 Objetivo

Criar um programa em Linguagem C que:
Leia um único caractere digitado pelo usuário
Classifique esse caractere em apenas uma categoria
Exiba o resultado na tela
Classificações possíveis (exatamente uma)
O caractere deve ser classificado em uma e somente uma das opções abaixo:
Letra maiúscula
Letra minúscula
Dígito
Espaço em branco (espaço, tabulação ou quebra de linha)
Símbolo*/

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void classificar_caractere(char caract){
	if(isalpha(caract)){
		if(isupper(caract)){
			printf("O '%c' é uma letra maiúscula.\n", caract);
		}else if(islower(caract)){
			printf("O '%c' é uma letra minúscula.\n", caract);
		}
	}else if(isdigit(caract)){
		printf("O '%c' é um número.\n", caract);
	}else if(isspace(caract)){
		printf("É um espaço.\n");
	}else{
		printf("O '%c' é um símbolo.\n", caract);
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char caract;
	printf("Digite um caractere: ");
	scanf("%c", &caract);
	while(getchar() != '\n');
	classificar_caractere(caract);
	
	return 0;
}
