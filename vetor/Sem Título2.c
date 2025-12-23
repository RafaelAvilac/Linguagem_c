#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "");
	
	float pontos[10], soma = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Informe a %dª nota: ", i +1);
		scanf("%f", &pontos[i]);
		soma += pontos[i];
	}
	printf("Total de pontos: %.2f", soma);
	return 0;
}
