/*5. Fac¸a um programa que pec¸a ao usuario para digitar 10 valores e some-os.*/
#include <stdio.h>
int main(){
	
	int n, soma = 0;
	
	for(int i = 0; i < 10; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		soma += n;
	}
	printf("Soma dos numeros digitados: %d", soma);
	
return 0;	
}
