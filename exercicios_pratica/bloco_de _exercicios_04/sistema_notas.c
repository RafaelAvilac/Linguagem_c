#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
 
 
 
typedef struct{
	char nome[100];
	float nota1, nota2, nota3;
	float media;
	char situacao[10];
	
}Aluno; 
void validar_quantidade(int *qtd){
	int entrada = 0;
	while(!entrada){
		printf("Informe a quantidade de alunos para cadastro: ");
		if(scanf("%d", qtd) != 1){
			printf("Digite apenas numeros.\n");
			while(getchar() != '\n');
		}else if(*qtd < 1){
			printf("Cadastre no minimo 01 aluno.\n");
			while(getchar() != '\n');
		}else{
			entrada = 1;
			while(getchar() != '\n');
		}
	}
		
}
validar
void maiuscula(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper(str[i]);
	}
}
void preencher(Aluno *alunos, int qtd){
	
	for(int i = 0; i < qtd; i++){
		printf("\n%dº nome: ", i +1);
		fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
		alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
		maiuscula(alunos[i].nome);
		
		printf("Digite a 1º nota: ");
		
		while(scanf("%f", alunos[i].nota1) != 1){
			printf("Digite apeas números.\n");
			 while(getchar() != '\n');
            printf("Digite a 1º nota: ");
		}
		 while(getchar() != '\n');
	}
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int qtd;
	Aluno *alunos;
	
	validar_quantidade(&qtd);
	
	alunos = (Aluno *) malloc(qtd * sizeof(Aluno));
	
	if(alunos == NULL){
		printf("Erro ao alocar memória.\n");
		return 1;
	}
	
	preencher(alunos, qtd);
	
	
	free(alunos);
	return 0;
}
