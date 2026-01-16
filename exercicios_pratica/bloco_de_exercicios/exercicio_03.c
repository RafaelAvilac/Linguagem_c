#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "");
	int opcao;
	
	printf("Informe um número inteiro de 1 a 7: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
				printf("Domingo\n");
			break;
		case 2:
				printf("Segunda\n");
			break;
		case 3:
				printf("Terça\n");
			break;
		case 4:
				printf("Quarta\n");
			break;
		case 5:
				printf("Quinta\n");
			break;
		case 6:
				printf("Sexta\n");
			break;
		case 7:
				printf("Sábado\n");
			break; 
		
		default:
		
				printf("Opção inválida.\n");					
	}
	
	
	return 0;
}
