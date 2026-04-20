/*6. Fac¸a um programa que leia 10 inteiros e imprima sua media.*/

#include <stdio.h>
int main(){
	
	int n, soma = 0;
	
	for(int i = 0; i < 10; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		soma += n;
	}
	float media = (float) soma / 10;
	printf("Media: %.2f", media);
	
return 0;	
}
