/*Alunos (3 notas + classificação)

Você já escolheu corretamente 3 variáveis de nota.
Agora é só executar o padrão que você já domina.

Objetivo (resumo rápido)
Cadastrar N alunos, calcular a média de 3 notas, armazenar a média e classificar:
Aprovado ? média = 7.0
Recuperação ? média = 5.0 e < 7.0
Reprovado ? média < 5.0*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
typedef struct{

	char nome[100];	
	float nota1, nota2, nota3;	
	float media;	
	char situacao[20];

}Aluno;

void preencher(Aluno alunos[], int n){
	for(int i = 0; i < n; i++){
		printf("\n\nNome do %dº aluno: ", i + 1);
		fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
		alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
		
		printf("Nota 1: ");
		scanf("%f", &alunos[i].nota1); 
		while(alunos[i].nota1 < 0 || alunos[i].nota1 > 10){
			printf("Digite uma nota válida: ");
			scanf("%f", &alunos[i].nota1); 
		}
		
		printf("Nota 2: ");
		scanf("%f", &alunos[i].nota2); 
			while(alunos[i].nota2  < 0 || alunos[i].nota2 > 10){
			printf("Digite uma nota válida: ");
			scanf("%f", &alunos[i].nota2); 
		}
		
		printf("Nota 3: ");
		scanf("%f", &alunos[i].nota3); 
			while(alunos[i].nota3 < 0  || alunos[i].nota3 > 10){
			printf("Digite uma nota válida: ");
			scanf("%f", &alunos[i].nota3); 
		}
		
		while(getchar() != '\n');
	}	
}
void calcular_media(Aluno alunos[], int n){
	for(int i = 0; i < n; i++){
		alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;	
	}
}

void verificar_situacao(Aluno alunos[], int n){
	
	for(int i = 0; i < n; i++){
		if(alunos[i].media >= 7){
			strcpy(alunos[i].situacao, "Aprovado");
		}else if(alunos[i].media >= 5){
			strcpy(alunos[i].situacao, "Recuperação");
		}else{
			strcpy(alunos[i].situacao, "Reprovado");
		}
	}	
}

void exibir(Aluno alunos[], int n){
	for(int i = 0; i < n; i++){
		printf("\n\n\tNome do %dº aluno: %s\n", i + 1, alunos[i].nome);
		printf("\tNota 1: %.2f\n", alunos[i].nota1);
		printf("\tNota 2: %.2f\n", alunos[i].nota2);
		printf("\tNota 3: %.2f\n", alunos[i].nota3);
		printf("\tMédia: %.2f\n", alunos[i].media);
		printf("\tSituação: %s\n", alunos[i].situacao);
	}
	
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n;
	
	printf("Cadastro de alunos.\n\n");
	printf("Quantos alunos deseja cadastrar: ");
	scanf("%d", &n);
	while(n < 1){
		printf("Quantidade inválida.\nCadastre no mínimo 01 aluno: ");
		scanf("%d", &n);
	}
	while(getchar() != '\n');
	
	Aluno alunos[n];

    preencher(alunos, n);
	calcular_media(alunos, n);
	printf("A média mínima para aprovação é: 7 pontos.\n");
	verificar_situacao(alunos, n);
	exibir(alunos, n);
	return 0;
}
