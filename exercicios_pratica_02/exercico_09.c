/*Exercício 2 — Par ou Ímpar

Leia um número inteiro e informe se ele é par ou ímpar.
Dicas (sem entregar a solução)
Qual operador verifica o resto da divisão?
Quando um número é considerado par?*/

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Informe o numero: ");
	scanf("%d", &numero);
	
	
	//verificar paridade
	if(numero % 2 == 0){
		printf("Par");
	}else{
		printf("Impar");
	}
	
	return 0;
}
