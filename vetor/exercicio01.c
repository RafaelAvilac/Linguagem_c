#include <stdio.h>

/*1 - Média de FPS de um Jogo

Crie um programa que leia os FPS (frames por segundo) de um jogo em 6 momentos e calcule a média. 

Digite os FPS registrados em 6 momentos:
 
Momento 1: 24
Momento 2: 23
Momento 3: 20
Momento 4: 34
Momento 5: 55
Momento 6: 48
 
Media de FPS: 34.00 */

int main(){
	
	float vetor[6], soma = 0, media;
	
	printf("Digite os FPS registrados em 6 momentos.\n\n");
	for(int i = 0; i < 6; i++){
		printf("Momento %d: ", i +1 );
		scanf("%f", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma / 6;
	
	printf("\n\nMedia de FPS: %.2f\n", media);
	
	return 0;
}
