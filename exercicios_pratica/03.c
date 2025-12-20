#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void ler_nota(float vetor[]){


for(int i = 0; i < 3; i++){
	printf("Informe a %dª nota: ", i +1);
	scanf("%f", &vetor[i]);
		while(vetor[i] < 0 || vetor[i] > 10){
			
			printf("Nota invalida.\nDigite novamente: ");
			scanf("%f", &vetor[i]);
			
		}
    }
    
}

float calcular_media(float vetor[]){
	
	float soma = 0, media = 0;
	
	for(int i = 0; i < 3; i++){
		soma += vetor[i];
	}
	media = soma / 3;
	
	return media;	
}

void classificar_media(float total_media){
	
	if(total_media >= 9){
		printf("Excelente!\n");
	}else if (total_media >= 7){
		printf("Bom!\n");
	}else if(total_media >= 5){
		printf("Regular!\n");
	}else{
		printf("Ruim!\n");
	}
	
	
	
}

int main(){
	setlocale(LC_ALL, "");
	char sair = 'n';
	
	while(sair != 's' && sair != 'S'){
	
	float vetor[3], total_media;
	
	ler_nota(vetor);
	
	total_media = calcular_media(vetor);
	
	printf("A media foi %.2f", total_media);
	
	classificar_media(total_media);
  
  	printf("Deseja sair?\n(S/N): ");
  	scanf(" %c", &sair);
  	system("cls");
   }
	
	return 0;
}
