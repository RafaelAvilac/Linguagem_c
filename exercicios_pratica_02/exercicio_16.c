/*Exercício 9 — Maior e Menor Valor do Vetor

Enunciado
Usando um vetor de 10 posições (como nos exercícios anteriores):
Leia os valores do vetor
Encontre o maior valor
Encontre o menor valor
Mostre ambos ao final*/

#include <stdio.h>
#include <locale.h>
#define TAM 10

int main(void){
	
setlocale(LC_ALL, "Portuguese");

int numeros[10], maior, menor;

for(int i = 0; i < TAM; i++){
	printf("Informe o %dº número: ", i + 1);
	scanf("%d", &numeros[i]);

}	

	maior = numeros[0];
	menor = numeros[0];

for(int i = 1; i < TAM; i++){
	
	if(numeros[i] > maior){
		maior = numeros[i];
	}
	if(numeros[i] < menor){
		menor = numeros[i];
	}
}	
 
    printf("\n============== RESULTADO ==============\n");
    printf("Vetor informado: ");
for(int i = 0; i < TAM; i++) {
        printf("%d ", numeros[i]);
}
    
    printf("\n\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("======================================\n");
	
	
	
	return 0;
}
