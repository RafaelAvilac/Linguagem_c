#include <stdio.h>

/*1-Calcular a média de dois números

Crie uma função que recebe duas notas (float) e retorna a média com 2 casas decimais.*/

float verificar_media(float nota_1, float nota_2){
	
	float media;
	
	media = (nota_1 + nota_2) / 2;
	
	return media;
	
}

int main (){
	
	float nota_1, nota_2, media_final;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota_1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &nota_2);
	
	media_final = verificar_media(nota_1, nota_2);
	
	printf("Media das duas notas foi %.2f", media_final);
	
	return 0;
}
