/*32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de ´
seu dobro.*/

#include <stdio.h>

int main(void){
	
	int n, sucessor_triplo, antecessor_dobro, resultado;
	
	printf("Inforeme um numero inteiro: ");
	scanf("%d", &n);
	
	 sucessor_triplo = n * 3 + 1;
	 antecessor_dobro = n * 2 - 1;
	 resultado =  sucessor_triplo + antecessor_dobro;
	 
	 printf("Resultado: %d\n", resultado);
	
	return 0;
}
