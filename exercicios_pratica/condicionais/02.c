/*Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz 
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o 
numero e invalido.*/
#include <stdio.h>
#include <math.h>

int main(void){
	
	int n;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	
	if(n > 0){
		double raiz = sqrt(n);
		printf("Raiz quadarada: %.2lf",raiz);
	}else{
		printf("Numero invalido\n");
	}
	
	
	return 0;
}
