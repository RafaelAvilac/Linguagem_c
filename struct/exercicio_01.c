/*Exercício 8: Cadastro de Aluno (Structs)
Objetivo: Criar um tipo de dado personalizado para agrupar informações escolares.

Passo a Passo:

Defina a estrutura: Crie uma struct chamada Aluno que contenha três campos:

nome (string/vetor de char)

nota1 (float)

nota2 (float)

Entrada de Dados: Na função main, declare uma variável do tipo Aluno. Peça ao usuário para digitar o nome e as duas notas, armazenando-os dentro da estrutura.

Processamento: Crie uma variável float media e calcule a média aritmética das duas notas (nota1 + nota2) / 2.

Saída: Exiba o resultado no formato:

"O aluno [Nome] obteve média [Média]"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100


typedef struct{

  char nome[TAM];
  float nota_01, nota_02;

}Aluno;
void preencher(Aluno *aluno){
	
	printf("Informe o nome do aluno: ");
	fgets(aluno->nome, sizeof(aluno->nome), stdin);
	aluno->nome[strcspn(aluno->nome, "\n" )] = '\0';
	
	printf("Informe a primeira nota: "); 
	scanf("%f", &aluno->nota_01);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &aluno->nota_02);
	
	 while (getchar() != '\n');
}

float media(Aluno *aluno){
	float media;
	
	media = (aluno->nota_01 + aluno->nota_02) / 2;
	
	return media;
}

int main(void){
	
	Aluno aluno;
	float media_aluno;
	
	preencher(&aluno);
	media_aluno = media(&aluno);
	printf("\n\nDados:\n");
	printf("\tAluno: %s\n", aluno.nome);
	printf("\tMedia: %.2f\n", media_aluno);
	
		return 0;
}
