/*A partir do cadastro de pessoas já implementado (struct Cadastro, com nome e idade):

Implemente uma funcionalidade que permita remover uma pessoa do vetor.
Requisitos
O usuário deve:
visualizar a lista de pessoas cadastradas (com índice)
informar o índice da pessoa que deseja remover
O programa deve:
validar se o índice é válido
remover a pessoa escolhida
reorganizar o vetor para não deixar “buracos
reduzir a quantidade total de pessoas em 1
 Após a remoção:
exibir o cadastro atualizado*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
typedef struct{
	char nome[100];
	int idade;
}Cadastro;

void maiuscula(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper((unsigned char)str[i]);
	}
}

void validar_qtd(int *qtd){
	
	int entrada_valida = 0;
	
while(!entrada_valida){
        printf("\nQuantos alunos deseja cadastrar: ");
        if(scanf("%d", qtd) != 1) {
            printf("Erro: Digite apenas números!\n");
             while(getchar() != '\n');
        } else if(*qtd < 1) {
            printf("Erro: Opção deve ser maior que  0!\n");
        } else {
		
            entrada_valida = 1;
        }
        while(getchar() != '\n');
    }
}
void preencher_dados(Cadastro *pessoas, int qtd){

	printf("\n\nDados dos alunos.\n");
	for(int i = 0; i < qtd; i++){
		int entrada_valida = 0;
		int nome_valido;
		 do {
		 	nome_valido = 1;
            printf("\nInforme o %dº nome: ", i + 1);
            fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
			pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
			maiuscula(pessoas[i].nome);
            
            if(!strlen(pessoas[i].nome)) {
                printf("Erro: Nome não pode estar vazio!\n");
                nome_valido = 0;
            }else {
				for(int j = 0; pessoas[i].nome[j] != '\0'; j++){
					if(!isalpha( (unsigned char)pessoas[i].nome[j]) && !isspace((unsigned char)pessoas[i].nome[j])){
						nome_valido = 0;
						printf("Erro: O nome deve conter apenas letras e espacos.\n");
						break;
					}
				}
			}
        } while(!nome_valido);
		
		while(!entrada_valida){
			printf("Idade do aluno: ");
			if(scanf("%d", &pessoas[i].idade) != 1){
				printf("Digite apenas numeros\n");
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

void exibir_todos(Cadastro *pessoas, int qtd){
	
	printf("\n\n<<- RELATORIO DE ALUNOS  ->>\n");
    printf("----------------------------------------------------------\n");
    printf("INDICE | NOME                                     | IDADE\n");
    printf("----------------------------------------------------------\n");
		for(int i = 0; i < qtd; i++){
			printf("%02d     | %-40s | %d anos\n", i+1, pessoas[i].nome, pessoas[i].idade);
			printf("----------------------------------------------------------\n");
		}
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	Cadastro *pessoas;
	int qtd; 
	
    validar_qtd(&qtd);
    
  	pessoas = (Cadastro *)malloc(qtd * sizeof(Cadastro));
  	if(pessoas == NULL){
  		printf("Erro ao alocar memoria");
  		return 1;
	}

	preencher_dados(pessoas, qtd);
	exibir_todos(pessoas, qtd);

	
	
	free(pessoas);
	return 0;
}

