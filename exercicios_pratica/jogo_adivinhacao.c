#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numero_secreto = 42, chute;
	
	printf("************************************\n");
	printf("* Bem-vindo ao Jogo de Adivinhação *\n");
	printf("************************************\n\n");
	
	printf("Qual seu chute? ");
	scanf("%d", &chute);
	printf("Voce chutou o número %d!\n\n", chute);
	
	int acertou = chute == numero_secreto;
	
	if(acertou){
		printf("Parabéns você acertou.\n");
	}else{
		printf("Você errou!\n");
		if( chute > numero_secreto){
			printf("Seu chute foi maior do que o número secreto!\n");

		}
		if( chute < numero_secreto){
			printf("Seu chute foi menor do que o número secreto!\n");
		}
		printf("Mas não desanime, tente de novo!\n");
	}
	
	
	return 0;
}
