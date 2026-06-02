#include <stdio.h>

void tentarAlterar(int *x){
	*x = 99;
}

int main(){
	int numero = 10;
	
	tentarAlterar(&numero);
	
	printf("Valor de x = %d\n", numero);
}
