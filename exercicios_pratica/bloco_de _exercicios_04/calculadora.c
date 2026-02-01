/*Fundamentos e Controle de Fluxo
Foco: Lógica, laços de repetição e bibliotecas básicas.

1. A Calculadora com "Sotaque" (Fácil)

Objetivo: Crie um programa que peça dois números e uma operação (+, -, *, /).
Use setlocale (de <locale.h>) para permitir acentos e vírgulas (ex: 10,5).
Use switch-case para escolher a operação.

Conceito: Configuração regional (LC_ALL), entrada/saída formatada e estruturas de seleção.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void receber_numeros(float *n1, float *n2){
	
	printf("============== Calculadora ==============\n\n");
	printf("Informe o primeiro número para o cálculo: ");

	while(scanf("%f", n1) != 1){
		printf("Digite apenas números: "); 
		scanf("%f", n1);
		while(getchar() != '\n');
	}
	
	printf("Informe o segundo número para o cálculo: ");

	while(scanf("%f", n2) != 1){
		printf("Digite apenas números: "); 
		scanf("%f", n2);
		while(getchar() != '\n');
	}
	printf("-----------------------------------------\n");
}
void menu(char *opcao){
	printf("===== Menu =====\n");
	printf("[+] Somar\n[-] Subtrair\n[*] Multiplicar\n[/] Dividir\nDigite a opção: ");
	scanf(" %c", opcao);

}
void somar(float n1, float n2){
	float soma = n1 + n2;
	printf("%.2f + %.2f = %.2f\n", n1, n2, soma);
}
void subtrair(float n1, float n2){
	float subtracao = n1 - n2;
	printf("%.2f - %.2f = %.2f\n", n1, n2, subtracao);
}
void multiplicar(float n1, float n2){
	float multiplicacao = n1 * n2;
	printf("%.2f x %.2f = %.2f\n", n1, n2, multiplicacao);
}
void dividir(float n1, float n2){
	if(n2 == 0.0){
		printf("Erro. Divisão por \"0\". ");
		return;
	}
	
	float divisao = (float) n1 / n2;
	
	printf("%.2f / %.2f = %.2f\n", n1, n2, divisao);
}
int main(void){
	 setlocale(LC_ALL, "Portuguese_Brazil");
	 
	float n1, n2;
	char opcao;
	

	receber_numeros(&n1, &n2);
	menu(&opcao);
	
	switch(opcao){
		
		case '+':
			somar(n1, n2);
			break;
		case '-': 
			subtrair(n1, n2);
			break;
		case '*': 
			multiplicar(n1, n2);
	 		break;
		case '/':
			dividir(n1,n2);
			break;
		default:
			printf("Opção inválida.\n");

			break;
	}
	
	return 0;
}
