#include <stdio.h>
#include <locale.h>

/*2 Maior e menor valor

Leia 8 números inteiros em um vetor e informe:

o maior valor

o menor valor*/

void preencher_numeros(int numeros[]){
	
	for(int i = 0; i < 8; i++){
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numeros[i]);
		}
}
void verificar_maior_menor(int numeros[]){
	int maior = numeros[0];
	int menor = numeros[0];
	for(int i = 1; i < 8; i++){
		
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		if(numeros[i] < menor){
			menor = numeros[i];
		}
		
	}
	printf("O maior número é: %d\nO menor número é: %d", maior, menor);
}

int main(){
	setlocale(LC_ALL, "");
	
	int numeros[8], sair = 1;
	
	while( sair != 0){
		preencher_numeros(numeros);
			
		verificar_maior_menor(numeros);
		
		printf("\nContinuar?\n( 0 - Não / 1 - Sim ): ");
		scanf("%d", &sair);
			while(sair <0 || sair > 1){
				printf("Opção inválida\n");
					printf("\nContinuar?\n( 0 - Não / 1 - Sim ): ");
					scanf("%d", &sair);
			}
		}

		
	return 0;
}
