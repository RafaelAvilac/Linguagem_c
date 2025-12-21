#include <stdio.h>
#include <locale.h>
int receber_valor(){
	
	int n;
	
	printf("Informe o n° para representar o tamanho do desenho: ");
	scanf("%d", &n);
	while (n < 0){
		printf("Valor inválido.\nDigite novamente: ");
		scanf("%d", &n);
	}
	return n;	
}

char escolher_caracter(){
	
	char caracter;
	printf("Digite o caractere escolhido: ");
	scanf(" %c", &caracter);
	
	return caracter;
}

void preencher_quadrado(int lado, char carac){
	
	for(int i = 0; i < lado; i++){
		for(int j = 0; j < lado; j++){
			printf(" %c ", carac);
		}
		printf("\n");
	}
	
	
}

int main(){
	setlocale(LC_ALL, "");
	int lado;
	char carac;
	
	lado = receber_valor();
	carac =  escolher_caracter();
	preencher_quadrado(lado, carac);

	return 0;
}
