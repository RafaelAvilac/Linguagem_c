/* Leia um valor inteiro N e apresente o quadrado de cada valor par de 1 até N*/

#include <stdio.h>
int main(){
	
	int n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i+=2){
		printf("%d ", i * i);
	}
	
	return 0;
}
