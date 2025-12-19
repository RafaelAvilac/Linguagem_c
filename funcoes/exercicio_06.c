#include <stdio.h>

/*6. Avaliação de desempenho
Você tem 5 jogadores. Para cada jogador, leia 3 notas de avaliação (float).
 Calcule a média de cada jogador. Use if/else para classificar
Excelente: média >= 9
Bom: entre 7 e 9
Regular: entre 5 e 7
Ruim: abaixo de 5*/


void medias(){
	
	float nota_1, nota_2, nota_3, media;
	
	for(int i = 1; i <= 5; i++){
		
		printf("Informe a 1 nota do %d jogador: ", i);
		scanf("%f", &nota_1);
		while(nota_1 < 0 || nota_1 > 10){
			printf("Nota invalida. Digite novamente: ");
			scanf("%f", &nota_1);
		}
		
		printf("Informe a 2 nota do %d jogador: ", i);
		scanf("%f", &nota_2);
		while(nota_2 < 0 || nota_2 > 10){
			printf("Nota invalida. Digite novamente: ");
			scanf("%f", &nota_2);
		}
		
		printf("Informe a 3 nota do %d jogador: ", i);
		scanf("%f", &nota_3);
		while(nota_3 < 0 || nota_3 > 10){
			printf("Nota invalida. Digite novamente: ");
			scanf("%f", &nota_3);
		}
		
		media = (nota_1 + nota_2 + nota_3) / 3;
		
		printf("Media: %.2f - ", media);
		
		if(media >= 9){
			printf("Excelente\n");
		}else if(media >= 7){
			printf("Bom\n");
		}else if(media >= 5){
			printf("Regular\n");
		}else{
			printf("Ruim\n");
		}
	}
}

int main(){
	
	medias();
	return 0;
}
