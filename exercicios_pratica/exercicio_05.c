#include <stdio.h>
#include <locale.h>
void preencher(float numeros[]){
	for(int i = 0; i < 6; i++){
		printf("Informe o %dº valor:", i + 1);
		scanf("%f", &numeros[i]);		
	}
}
float calcular_media(float numeros[]){
	float soma = 0;
	for(int i = 0; i < 6; i++){
		soma += numeros[i];
	}
	float media = soma / 6;
	return media;
}
void exibir_valores_acima(float numeros[], float total_media){
	printf("A média calculada foi: %.2f\n\n", total_media);
	printf("Valores que ficaram acima da média: \n");
	for(int i = 0; i < 6; i++){
		if(numeros[i] > total_media){
			printf("%.2f\t", numeros[i]);
		}
	}
}
int main(){
	setlocale(LC_ALL, "");
	float numeros[6], total_media;
	
	
	preencher(numeros);
	total_media = calcular_media(numeros);
	exibir_valores_acima(numeros, total_media);
	
	return 0;
}
