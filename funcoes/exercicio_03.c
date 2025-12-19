#include <stdio.h>
/*3. Encontrar o maior de três números

Crie uma função que receba três inteiros e retorne o maior deles.*/

int verificar_maior(int a, int b, int c){
	int maior = 0;
	if (a >= b && a >=c){
		
		maior = a;
	}else if(b >= a && b >= c){
		
		maior = b;
	}else {
		
		maior = c;
	}
	return maior;
}
void preencher_variaveis(int *a,int *b,int *c){
	
	
	printf("Informe o primeiro numero:");
	scanf("%d", a);
	printf("Informe o primeiro numero:");
	scanf("%d", b);
	printf("Informe o primeiro numero:");
	scanf("%d", c);
	
}
int main(){
	int maior, a, b, c;
	preencher_variaveis(&a, &b, &c);
	maior = verificar_maior(a, b, c);
	printf("O maior numero e %d", maior);
	
	return 0;
}
