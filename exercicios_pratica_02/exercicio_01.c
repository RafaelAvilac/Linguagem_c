/*1 Atualização por referência
Crie uma função que receba dois ponteiros para int e:
se o primeiro valor for maior que o segundo, troque-os
caso contrário, mantenha
Use if e ponteiros
Teste no main antes e depois da chamada*/
#include<stdio.h>

void verificar(int *a, int *b){
	int temp;
	if(*a > *b){
		temp = *b;
		*b = *a;
		*a = temp;
	}	
}

int main(void){
	
	int a, b;
	
	printf("Informe o valor para a : ");
	scanf("%d", &a);
	
	printf("Informe o valor para b : ");
	scanf("%d", &b);
	
	printf("Antes: a = %d, b = %d\n", a, b);
	
	verificar(&a, &b);
					
	printf("Depois: a = %d, b = %d\n", a, b);
	
	return 0;
}
