/*Cadastro simples
Crie um programa que:
cadastre até 5 pessoas (struct)
nome (string)
idade (int)
Liste:
todas
apenas maiores de idade
?? Foco: vetor, struct, for, if.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	
	char nome[100];
	int idade;

}Cadastro;

void maiuscula(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper((unsigned char)str[i]);
	}
}

void preencher_dados(Cadastro *pessoas, int qtd){

	printf("\n\nDados dos alunos.\n");
	for(int i = 0; i < qtd; i++){
		int entrada_valida = 0;
		 do {
            printf("Informe o %d nome: ", i + 1);
            fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
			pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
			maiuscula(pessoas[i].nome);
            
            if(strlen(pessoas[i].nome) == 0) {
                printf("Erro: Nome não pode estar vazio!\n");
            }
        } while(strlen(pessoas[i].nome) == 0);
		
		while(!entrada_valida){
			printf("Informe a idade do aluno: \n");
			if(scanf("%d", &pessoas[i].idade) != 1){
				printf("Digite apenas numeros");
				while(getchar() != '\n');
			}else if( pessoas[i].idade < 4){
				printf("Idade mínima 4 anos.\n");
			}else{
				entrada_valida = 1;
				while(getchar() != '\n');
			}
			
		}
	
	}
}
int main(){
	
	Cadastro *pessoas;
	int qtd, entrada_valida = 0;
	
while(!entrada_valida){
        printf("\nQunatos alunos deseja cadastrar: ");
        if(scanf("%d", &qtd) != 1) {
            printf("Erro: Digite apenas números!\n");
             while(getchar() != '\n');
        } else if(qtd < 1) {
            printf("Erro: Opção deve ser maior que  0!\n");
        } else {
		
            entrada_valida = 1;
        }
        while(getchar() != '\n');
    }
    
  	pessoas = (Cadastro *)malloc(qtd * sizeof(Cadastro));
  	if(pessoas == NULL){
  		printf("Erro ao alocar memoria");
  		return 1;
	  }
	preencher_dados(pessoas, qtd);
	
	free(pessoas);
	return 0;
}

