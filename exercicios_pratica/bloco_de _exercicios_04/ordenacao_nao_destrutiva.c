/*Ordenação "Não Destrutiva" (Cópia de Memória)
O Problema: No seu código atual, quando você ordena por nome ou idade, o vetor original é alterado para sempre. 
Se o usuário quiser ver a lista na ordem de cadastro original depois, ele não consegue.

O Desafio: Crie uma função chamada exibir_ordenado_sem_alterar.
Dentro dessa função, você deve criar um segundo vetor (ponteiro auxiliar) usando malloc, com o mesmo tamanho do original.
Copie todos os dados do vetor original para esse vetor auxiliar.
Ordene o vetor auxiliar (Bubble Sort).

Exiba o vetor auxiliar.
Libere a memória do auxiliar (free) antes de sair da função.
Resultado: O usuário vê a lista ordenada, mas a lista original permanece intacta.
Conceitos treinados: Alocação dinâmica, cópia de structs, escopo de variáveis e free.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct{

	char aluno[100];
	int idade;

}Cadastro;

void validar_tamanho(int *tamanho){
	
	int entrada_valida = 0;
	while(!entrada_valida){
		printf("Informe quantos alunos deseja cadastrar: ");
		if(scanf("%d", tamanho) != 1){
			printf("Digite apenas números.\n");
			while(getchar() != '\n');
		}else if(*tamanho < 1){
			printf("Cadastro mínimo 01.\n");
		}else{
			entrada_valida = 1;
			
		}
		
	}
		while(getchar() != '\n');
}

void maiusculas(char *str){
	
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = toupper(str[i]);
	}
	
}

void preencher_dados(Cadastro *p1, int tamanho){
	
	 printf("\n\nDados dos alunos.\n");
	 
	 for(int i = 0; i < tamanho; i++){
	 	int nome_valido;
	 	int entrada_valida = 0;
	 	do{
	 		nome_valido = 1;
	 		
	 		printf("Informe o nome do %dº aluno: ", i +1);
	 		
	 		fgets(p1[i].aluno, sizeof(p1[i].aluno), stdin);
	 		p1[i].aluno[strcspn(p1[i].aluno, "\n")] = '\0';
	 		maiusculas(p1[i].aluno);
	 		
	 		if(!strlen(p1[i].aluno)){
	 			 printf("Erro: Nome não pode estar vazio!\n");
				 nome_valido = 0;	 
			 }else{
			 	for(int j = 0; p1[i].aluno[j] != '\0'; j++){
			 		if(!isalpha((unsigned char)p1[i].aluno[j]) && !isspace((unsigned char)p1[i].aluno[j])){
			 			nome_valido = 0;
                        printf("Erro: O nome deve conter apenas letras e espacos.\n");
                        break;	
					 }
				 }
			 }	
		 }while(!nome_valido);	
		 
		 while(!entrada_valida){
        	printf("Idade do aluno: ");
            if(scanf("%d", &p1[i].idade) != 1){
            	printf("Digite apenas numeros\n");
            	while(getchar() != '\n'); // Limpa buffer em caso de erro (letra no lugar de número)
            } else if(p1[i].idade < 4){
            	printf("Idade mínima 4 anos.\n");
            } else {
            	entrada_valida = 1;
                while(getchar() != '\n'); // Limpa o enter residual após o scanf
            }
        }
	 }
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int tamanho;
	Cadastro *p1;
	
	validar_tamanho(&tamanho);
	
	p1 = (Cadastro*) malloc(tamanho* sizeof(Cadastro));
	
	if(p1 == NULL){
		printf("ERRO ao alocar mémoria.\n");
		return 1;
	}
	preencher_dados(p1, tamanho);
	
	free(p1);
	return 0;
}

