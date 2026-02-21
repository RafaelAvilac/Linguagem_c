//5. Leia um numero real e imprima a quinta parte deste n ´ umero.

#include <stdio.h>

int main(void){
	
	double n1;
	
	printf("Digite um numeros real: ");
	scanf("%lf", &n1);
	
	double quinta_parte = n1 / 5;
	
	printf("Quinta parte de %lf: %lf\n", n1, quinta_parte );
	
	return 0;
}
