#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAM_MAX 10
#define ANO_MIN 1972
#define ANO_ATUAL 2026
typedef struct{
	char nome[100];
	int ano;
	int vezes_locado;
	char status; 
	char locatario[100];
}Filme;
void limpar_tela() {
    printf("\033[2J\033[H");
}

void maiuscula(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper((unsigned char)str[i]);
	}
}

void menu( ){
	
	printf("================= MENU =================\n\n");
	printf("1 - Cadastrar filme\n");
	printf("2 - Listar todos os filmes\n");
	printf("3 - Listar filmes locados\n");
	printf("4 - Alugar filme\n");
	printf("5 - Devolver filme\n");
	printf("6 - Filme mais locado\n");
	printf("7 - Buscar filme pelo nome\n");
	printf("8 - Atualizar dados do filme\n");
	printf("9 - Estatísticas gerais\n");
	printf("0 - Sair\n");
	printf("========================================\n");
}

void validar_opcao(int *opcao){
	 int entrada_valida = 0;
    
    while(!entrada_valida) {
        printf("\nInforme o número da opção desejada (0-9): ");
        if(scanf("%d", opcao) != 1) {
            printf("Erro: Digite apenas números!\n");
        } else if(*opcao < 0 || *opcao > 9) {
            printf("Erro: Opção deve estar entre 0 e 9!\n");
        } else {
            entrada_valida = 1;
        }
        // Limpa o buffer do teclado
        while(getchar() != '\n');
    }
		
}
void cadastrar_filmes(Filme *filmes, int *total_filmes){

	char sair = 's';
	
	if(*total_filmes >= TAM_MAX){
		printf("Não é possível cadastrar filmes.\nLimite atingido.\n");
		return;
	}
	int i = *total_filmes;
	printf("====== Cadastro de Filmes =====\n");
	// Correção: O loop deve continuar enquanto o usuário não digitar 'n' e houver espaço
	while(sair != 'n' && i < TAM_MAX){
	
		printf("\nNome do %dº filme: ", i + 1);
		fgets(filmes[i].nome, sizeof(filmes[i].nome), stdin);
		filmes[i].nome[strcspn(filmes[i].nome, "\n")] = '\0';
		maiuscula(filmes[i].nome);
		
		 int entrada_valida = 0;
		while(!entrada_valida) {
		
	      	 printf("Ano de lançamento: ");
	        	if(scanf("%d", &filmes[i].ano) != 1) {
	            printf("Erro: Digite apenas números!\n");
	       		 } else if(filmes[i].ano < ANO_MIN || filmes[i].ano > ANO_ATUAL) {
	            printf("Erro: Ano de lançamento inválido\n");
	       		 } else {
	            entrada_valida = 1;
	       		 }
	      		  // Limpa o buffer do teclado
	       		while(getchar() != '\n');
	    }
		
		filmes[i].vezes_locado = 0;
	    filmes[i].status = 'D';  // Disponível
	    strcpy(filmes[i].locatario, "");
		
		i++;
		(*total_filmes)++;
		
		if(i >= TAM_MAX) {
	        printf("\nLimite máximo de %d filmes atingido!\n", TAM_MAX); // Correção do typo \Limite
	        printf("=====================================\n");
	        return;
	    }
		
		printf("Cadastrar novo Filme (S/N): ");
		scanf(" %c", &sair);
		while(getchar() != '\n');
		sair = tolower(sair);
	}
	printf("\nCadastro finalizado. Total de filmes: %d/%d\n", *total_filmes, TAM_MAX);
	printf("=====================================\n");
}


int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao;
	int total_filmes = 0;
	Filme filmes[TAM_MAX];	
	
	menu();
	validar_opcao(&opcao);
	limpar_tela();
	cadastrar_filmes(filmes, &total_filmes);
	
	
return 0;	
}
