/*Final do Nível 1: Exercício 5 (Classificador de Idades)Agora vamos entrar no mundo dos Vetores (Arrays). 
Até agora, usamos variáveis simples que guardam apenas um valor. 
Mas e se quisermos guardar vários valores relacionados?O Desafio:Declare um vetor para armazenar 5 idades (int idades[5]).
Use um laço for para pedir ao usuário que digite as 5 idades, uma por uma, e guarde-as no vetor.
Após ler tudo, percorra o vetor (pode ser outro laço) para contar quantas pessoas são
Maiores de Idade ($\ge$ 18) e quantas são Menores.Mostre os resultados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

void preencher(int *idades){
	for(int i = 0; i < TAM;i++){
		printf("Inforeme a %dº idade: ", i + 1);
		scanf("%d", &idades[i]);
		while(idades[i] < 0){
			printf("Digite uma idade válida: ");
			scanf("%d", &idades[i]);
		}
	}	
}

void verificar_idades(int *idades, int *maior, int *menor){
	
	*maior = 0;
    *menor = 0;
	
	for(int i = 0; i < TAM; i++){
		if(idades[i] >= 18 ){
			(*maior)++;
		}else{
			(*menor)++;
		}
	}
}
void exibir_idades(int *idades){
	printf("\n=== IDADES DIGITADAS ===\n");
    for(int i = 0; i < TAM; i++){
        printf("Pessoa %d: %d anos\n", i + 1, idades[i]);
    }
}
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idades[TAM];
	int maior = 0, menor = 0;
		
	preencher(idades);
	verificar_idades(idades, &maior, &menor);
	exibir_idades(idades);
	printf("\nTemos %d maiores de idade.\nTemos %d menores de idade.\n", maior, menor);


	return 0;
}
