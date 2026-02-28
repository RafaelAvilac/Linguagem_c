/*31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>

int main(void){
	
	int n, antecessor, sucessor;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	antecessor = n - 1;
	sucessor = n + 1;
	
	printf("Antecessor: %d\n", antecessor);
	printf("Sucessor: %d\n", sucessor);
	
	return 0;
}
