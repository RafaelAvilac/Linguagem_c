//4. Leia um numero real e imprima o resultado do quadrado desse n ´ umero.

#include <stdio.h>

int main(void){
	
	float n1;
	
	printf("Digite um numeros real: ");
	scanf("%f", &n1);
	
	float quadrado = n1 * n1;
	
	printf("Quadarado de %f: %f\n", n1, quadrado);
	
	return 0;
}
