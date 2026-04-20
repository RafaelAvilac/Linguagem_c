/*7. Fac¸a um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua ˜
media*/

#include <stdio.h>
int main(){
	
	int n, soma = 0;
	float media = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &n);
		
		if(n > 0){
			soma += n;
		}else{
			printf("Numero invalido! Digite um positivo.\n");
			i--;
		}
	}
	media = (float) soma / 10;
	printf("Media: %.2f", media);
	
	return 0;
}
