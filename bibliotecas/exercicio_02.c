#include <stdio.h>
#include <stdlib.h>

/*2. Cadastro de idade

Um sistema de cadastro recebe a idade de uma pessoa como texto (string). 
Escreva um programa em C que leia essa informação como uma string e depois converta para inteiro usando atoi.
Em seguida, exiba a idade e verifique se a pessoa é maior de idade (18 anos ou mais).*/




int verificar_idade(int convert_idade){
	
	if(convert_idade >= 18){
		return 1;
	}else {
		return 0;
	}	
}


int main(){
	
	char idade[100];
	int convert_idade;
	printf("Informe sua idade: ");
	scanf("%99s", idade);
	
    convert_idade = atoi(idade);
	printf("Idade %d\n", convert_idade);
	
	if(verificar_idade(convert_idade)){
		printf("Maior de idade\n");
	}else{
		printf("Menor de idade\n");
	}
	
	return 0;
}
