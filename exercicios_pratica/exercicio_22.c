#include <stdio.h>
#include <locale.h>

/*Desenvolva uma calculadora em linguagem C.
O programa deve ser executado quantas vezes for necessário 
e deve contar com todas as operações básicas (+, -, *, /).
A precisão da calculadora deve ser de dois dígitos.
O programa deve perguntar ao usuário qual operação ele deseja realizar.
O programa deve executar quantas vezes for necessário.*/

float somar(float n_1, float n_2){
	return n_1 + n_2;
}
float subtrair(float n_1, float n_2){
	return n_1 - n_2;
}
float multiplicar(float n_1, float n_2){
	return n_1 * n_2;
}
float dividir(float n_1, float n_2){

	return n_1 / n_2;
}
void limpar() {
    printf("\033[2J\033[H");
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int sair = 1, escolha;
	float n_1, n_2;
	
	while(sair == 1){
		
		printf("============= Calculadora =============\n");
		printf("[1] - Somar\n[2] - Subtrair\n[3] - Multipicar\n[4] - Dividir\n[5] - Sair\n");
		printf("=======================================\n");
		do{
			printf("Digite a opção desejada: ");
			scanf("%d", &escolha);
		}while(escolha < 1  || escolha > 5);
		limpar();
	
			switch(escolha){
				case 1:
					printf("1º número: ");
					scanf("%f", &n_1);
					printf("2º número: ");
					scanf("%f", &n_2);
					printf("%.2f + %.2f = %.2f\n", n_1, n_2, somar(n_1, n_2));
					break;
				case 2:
					printf("1º número: ");
					scanf("%f", &n_1);
					printf("2º número: ");
					scanf("%f", &n_2);
					printf("%.2f - %.2f = %.2f\n", n_1, n_2, subtrair(n_1, n_2));	
					break;
				case 3:
					
					printf("1º número: ");
					scanf("%f", &n_1);
					printf("2º número: ");
					scanf("%f", &n_2);
					printf("%.2f x %.2f = %.2f\n", n_1, n_2, multiplicar(n_1, n_2));
				
					break;
				case 4:
					
					printf("1º número: ");
					scanf("%f", &n_1);
					printf("2º número: ");
					scanf("%f", &n_2);
					
					if(n_2 == 0){
						printf("Dividao por 0 não permitida\n");
						while(n_2 == 0){
								printf("2º número: ");
								scanf("%f", &n_2);
						}
					}
						printf("%.2f / %.2f = %.2f\n", n_1, n_2, dividir(n_1, n_2));	
						
					break;
				case 5:
					printf("Até logo!\n");
					sair = 0;
				break;
				default:
					printf("Opção invalida.\n");
					break;
			}
	
	}
	
	return 0;
}
