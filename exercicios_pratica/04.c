#include <stdio.h>
#include <locale.h>



void preencher(float vetor[]){
	
	for(int i =0; i < 3; i++){
		printf("Informe a %dª nota: ", i +1);
		scanf(" %f", &vetor[i]);
			while(vetor[i] < 0 || vetor[i] > 10){
				
				printf("Nota inválida.\nDigite novamente: ");
				scanf(" %f", &vetor[i]);	
			}
	}	
}

float calcular_media(float vetor[]){
	
	float soma = 0, media = 0;
	
	for(int i = 0; i < 3; i++){
		
		soma += vetor[i];
	}
	media = soma /3;
	
	return media;
}
void classificar_nota(float vetor[], float *maior,float *menor){
	
	*maior = vetor[0];
    *menor = vetor[0];
	
	for(int i = 1; i < 3; i++){
		if(vetor[i] > *maior){
			*maior = vetor[i];
		}
		if(vetor[i] < *menor){
			*menor = vetor[i];
		}
	}
	
}

int acima_media(float vetor[],float media_total){
	int acima = 0;
	for(int i = 0; i < 3; i++){
		if(vetor[i] > media_total){
			acima++;
		}
		
	}
	return acima;
}
int main(){
	setlocale(LC_ALL, "");
	
	float vetor[3], media_total = 0, maior, menor;
	char sair = 'n';
	
	while(sair != 'S' && sair != 's'){
	
		preencher(vetor);
		media_total = calcular_media(vetor);
		printf("\n\nA média foi : %.2f\n\n", media_total);
		classificar_nota(vetor, &maior, &menor);
		printf("A maior nota foi: %.2f\nA menor nota foi: %.2f\n\n", maior, menor);
		printf("Ficaram acima da média, %d alunos.\n", acima_media(vetor, media_total));
		printf("Deseja sair?\n(S/N): ");
		scanf(" %c", &sair);
	}
	
	return 0;
}
