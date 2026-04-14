#include <stdio.h>

int main(void){
	
	int dia;
	
	printf("Digite de 1 a 7 para saber o dia da semana correspondente: ");
	
	scanf("%d", &dia);
	
	if(dia < 1 || dia > 7){
		printf("Não existe dia sa semana com este numero.\n");
	}else if(dia == 1){
		printf("Domingo.\n");
	}else if(dia == 2){
		printf("Segunda.\n");
	}else if(dia == 3){
		printf("Terça.\n");
	}else if(dia == 4){
		printf("Quarta.\n");
	}else if(dia == 5){
		printf("Quinta\n");
	}else if(dia == 6){
		printf("Sextou.\n");
	}else {
		printf("Sabado.\n");
	}
	
	
	
	
	
	
}
