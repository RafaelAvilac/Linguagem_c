/*10. Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.*/
#include <stdio.h>
int main(){
	
	int i, soma = 0, contador = 0;
	
	for(i = 2; contador < 50; i += 2){
			soma += i;
			contador ++;	
	}
	printf("Soma dos pares: %d", soma);
	
	return 0;
}
