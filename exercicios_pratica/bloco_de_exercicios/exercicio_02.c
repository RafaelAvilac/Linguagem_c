#include <stdio.h>
#include <locale.h>

void verificar_idade(int *idade){
	if(*idade <= 12){
		printf("Idade %d ano(s) consederado criança.\n", *idade);
	}else if(*idade <= 17){
		printf("Idade %d anos  considerado adolescente.\n", *idade);
	}else if(*idade <= 59){
		printf("Idade %d anos  considerado adulto\n", *idade);
	}else{
		printf("Idade %d anos  considerado idoso.\n", *idade);
	}
}
int main(void){
	setlocale(LC_ALL, "");
	int idade; 
		
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	while(idade < 0){
		printf("Idade inválida.\n");
		printf("Digite novamente: ");
		scanf("%d", &idade);
	}
	verificar_idade(&idade);
	
	return 0;
}
