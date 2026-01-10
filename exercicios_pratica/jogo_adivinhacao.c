#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_DE_TENTATIVAS 3




int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numero_secreto = 42, chute;
	
	printf("************************************\n");
	printf("* Bem-vindo ao Jogo de Adivinhação *\n");
	printf("************************************\n\n");

	

	for(int i = 1; i <= NUMERO_DE_TENTATIVAS ; i++){
	
	printf("Qual seu %dº chute? ", i);
	scanf("%d", &chute);
	printf("Seu %dº chute foi o número %d!\n\n", i, chute);
	
	if(chute < 0){
		printf("Não permitido nº negativo.\n");
		
		i--;
		continue;
	}
	
	int acertou = chute == numero_secreto;
		int maior = chute > numero_secreto;
		if(acertou){
			printf("Parabéns você acertou.\n");
			break;
		}else if(maior){
				printf("Seu chute foi maior do que o número secreto!\n");

		} else{
				printf("Seu chute foi menor do que o número secreto!\n");
		}
		printf("Mas não desanime, tente de novo!\n\n");
	}

  
  	printf("Obrigado por jogar!!!\n\n");
	return 0;
}
