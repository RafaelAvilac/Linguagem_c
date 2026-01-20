#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{

	char nome_rua[100];
	char bairro[100];
	int numero_casa;


}Endereco;
typedef struct{
	
	Endereco endereco;
	
	char nome[100];
	char sexo;
	int idade;

}Pessoa;

int main(void){
	
	Pessoa p_1;
	
	printf("Informe seu nome: ");
	fgets(p_1.nome, sizeof(p_1.nome), stdin);
	p_1.nome[strcspn(p_1.nome, "\n")] = '\0';	

	
	printf("Informe o sexo(M/F): ");
	scanf(" %c", &p_1.sexo);

	
	printf("Informe sua idade: ");
	scanf("%d", &p_1.idade);
	
	while (getchar() != '\n'); // Limpa o buffer de entrada (remove o \n que ficou depois do scanf)
	
	printf("Informe nome da rua: ");
	fgets(p_1.endereco.nome_rua, sizeof(p_1.endereco.nome_rua), stdin);
	p_1.endereco.nome_rua[strcspn(p_1.endereco.nome_rua, "\n")] = '\0';	

	
	printf("Informe o bairro: ");
	fgets(p_1.endereco.bairro, sizeof(p_1.endereco.bairro), stdin);
	p_1.endereco.bairro[strcspn(p_1.endereco.bairro, "\n")] = '\0';	

	
	printf("Informe o numero da casa: ");
	scanf("%d", &p_1.endereco.numero_casa);
	
	printf("\n\n====== Dados Cadastrais ======\n");
	printf("Nome: %s\n", p_1.nome);
	printf("Sexo: %c\n", p_1.sexo);
	printf("Idade: %d\n", p_1.idade);
	
	printf("\nBairro: %s\n", p_1.endereco.bairro);
	printf("Rua: %s\n", p_1.endereco.nome_rua);
	printf("Numero: %d\n", p_1.endereco.numero_casa);
	
	
	
	return 0;
}
