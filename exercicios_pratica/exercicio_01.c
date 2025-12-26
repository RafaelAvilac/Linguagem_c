#include <stdio.h>
#include <locale.h>
/*BLOCO 1 — Vetores (base sólida)
1 Soma e média

Leia 10 números inteiros, armazene em um vetor, calcule:

a soma

a média

Exiba os resultados.*/

int main(){
	setlocale(LC_ALL, "");
	
	int numeros[10], soma = 0;

	for(int i = 0; i < 10; i++){
		printf("Informe o %dº: ", i + 1);
		scanf("%d", &numeros[i]);
		soma += numeros[i];
	}
		float media = (float)soma / 10;
	printf("Soma dos numeros: %d\nMédia: %.2f", soma, media);
	
	return 0;
}
