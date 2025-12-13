#include <stdio.h>

/*3 – Tabuada
Escreva um programa que recebe um número inteiro do usuário e imprime a tabuada desse número de 0 a 10.
Exemplo de saída se o usuário digitar 5:

5 x 0 = 0?
5 x 1 = 5 
5 x 2 = 10 
5 x 3 = 15 
... 
5 x 10 = 5*/

int main(){
	
	int n;
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	printf("Tabuada do %d. \n", n);
	for(int i =1; i <= 10; i++){
		
		printf("%d x %d = %d\n", n, i, n * i);
		
	}
	
	return 0;
}
