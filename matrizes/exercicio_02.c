#include <stdio.h>

int main(){
	
	
	float notas[3][4], soma, media;
	int i, j;
	
	for(i = 0; i < 3; i++){
		soma = 0, media = 0;
		for(j = 0; j < 4; j++){
			printf("Aluno %d, Prova %d: ", i + 1, j + 1);
			scanf("%f", &notas[i][j]);
			soma+=notas[i][j];
		}
		media = soma / 4;
		printf("\n\nMedia do aluno %d: %.2f\n\n", i + 1, media);
	}
	
	
	return 0;
}
