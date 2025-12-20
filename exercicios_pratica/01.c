#include <stdio.h>
#include <locale.h>

int main(){
	
/*1 Validação de entrada (int)
Crie um programa que:
Leia um número inteiro
Valide para aceitar somente valores entre 1 e 100
Continue pedindo enquanto o valor for inválido
Ao final, imprima o número válido
Use: while, scanf, if*/
	setlocale(LC_ALL, "");
	
	int n;
	
	printf("Insira um número entre 1 e 100: ");
	scanf("%d", &n);
		while(n < 1 || n > 100){
			printf("Valor inválido.\nInforme um valor válido: ");
			scanf(" %d", &n);
	}
	
	printf("Valor digitado: %d\n", n);
	
	
	return 0;
}
