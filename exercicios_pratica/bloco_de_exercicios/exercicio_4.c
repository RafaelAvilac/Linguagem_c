/*A Calculadora de Menu: Crie um programa que mostre um menu: 1. Somar, 2. Subtrair, 3. Sair.
Use um do-while para repetir o menu até o usuário escolher sair.
Use switch case para processar a escolha.*/

#include <stdio.h>
#include <locale.h>
void menu(char *opcao, int *n_1, int *n_2){
	printf("======= Calculadora =======\n");
	printf("[+] - Somar.\n[-] - Subtração.\n[*] - Multiplicação.\n[/] - Divisão.\n");	
	printf("===========================\n");
	printf("Digite a opção: ");
	scanf(" %c", opcao);
	
	printf("Informe o 1º número: ");
	scanf("%d", n_1);
	printf("Informe o 2º número: ");
	scanf("%d", n_2);
}
void calculadora(char *opcao, int *n_1, int *n_2){
	
	
	
	switch(*opcao){

	case '+':
		printf("\nResultado soma.\n\n");
		printf("%d + %d = %d\n", *n_1, *n_2, *n_1 + *n_2);
		
	break;
	
	case '-':
		printf("\nResultado subtração.\n\n");
		printf("%d - %d = %d\n", *n_1, *n_2, *n_1 - *n_2);
	break;
	
	case '*':
	printf("Resultado Multiplicação.\n\n");
		printf("%d x %d = %d\n", *n_1, *n_2, *n_1 * *n_2);
		
	break;
	
	case '/':
		
		printf("Resultado divisão.\n\n");
		
		while(*n_2 == 0){
			
			printf("Não permitido divisão por 0.\n");
			printf("Digite outro nº: ");
			scanf("%d", n_2);
		}
		float resultado = (float) *n_1 / *n_2;
		
		printf("%d / %d = %.2f\n", *n_1, *n_2, resultado);
		
	break;
	
	default:
		
		printf("Operação inválida.\n");
	}		
}
int saida(){
	
	int opcao;
	printf("\n\nDigite (0)Sair (1)Continuar: ");
	scanf("%d", &opcao);
	while(opcao != 0 && opcao != 1){
		
		printf("\nDigite uma opção valida:\n");
		scanf("%d", &opcao);
	}
	if(opcao){
		return 1;
	}
	return 0;	
}

int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char opcao;
	int n_1, n_2, sair = 1, retorno;
	
	while(sair == 1){
	
	menu(&opcao, &n_1, &n_2);
	calculadora( &opcao, &n_1, &n_2);
	retorno = saida();

		if(retorno == 0){
			sair  = 0;
		}
	
	}
	return 0;
}
