/* Exercício 5 — Resumo

Ler o tamanho de um vetor
Alocar o vetor com malloc
Preencher o vetor com valores
Criar um menu em loop (while) com switch-case:
[1] Mostrar vetor
[2] Mostrar soma e média
[3] Contar pares e ímpares
[4] Inverter vetor (com ponteiros)
[0] Sair
Regras:
Usar ponteiros
ada opção chama uma função
Não usar realloc
Liberar memória com free*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencher(int *numeros, int tam){
	
	for(int i = 0; i < tam; i++){
		
		printf("Informe o %dº valor: ", i + 1);
		scanf("%d", &numeros[i]);	
	}
}

void menu(void){
	printf("\n[1] Mostrar vetor\n");
	printf("[2] Mostrar soma e média\n");
	printf("[3] Contar pares e ímpares\n");
	printf("[4] Inverter vetor (com ponteiros)\n");
	printf("[0] Sair\n");
}
int validar_opcao(int *opcao) {
    // Valida e retorna 1 para continuar, 0 para sair
    while(*opcao < 0 || *opcao > 5) {
        printf("Opção inválida!\n");
        printf("Digite uma opção válida (0-5): ");
        scanf("%d", opcao);    
    }
    return (*opcao != 0); // Retorna 0 se escolheu sair, 1 caso contrário
}
void mostrar(int *numeros, int tam){
	
	printf("\n\n\tVetor original.\n\n");
	for(int i = 0; i < tam; i++){
		printf("  %d\t", numeros[i]);
	}
	printf("\n\n");
}

void soma_media(int *numeros, int tam){
	int somar = 0;
	float media;
	for(int i = 0; i < tam; i++){
		somar += numeros[i];
	}
	media = (float)somar / tam;
	printf("\nSoma = %d\nMédia = %.2f\n\n", somar, media);
	
}

void contagem(int *numeros,int tam, int *cont_p, int *cont_i){
	
	for(int i = 0; i < tam; i++){
		if(numeros[i] % 2 == 0){
			(*cont_p)++;
		}else{
			(*cont_i)++;
		}
	}
}

void inverter(int *numeros, int tam){
	int temp;
	for(int i = 0; i < tam / 2; i++){
		temp = numeros[i];
		numeros[i] = numeros[tam - 1 - i ];
		numeros[tam - 1 - i ] = temp;
	}
	printf("\n\tVetor modificado.\n");
	for(int i = 0; i < tam; i++){
		printf("%d\t", numeros[i]);
	}
	printf("\n\n");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int tam, *numeros, opcao, cont_p = 0, cont_i = 0;
	int continuar = 1;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tam);
	
	numeros = calloc(tam, sizeof(*numeros));
	
	preencher(numeros, tam);
	
	while(continuar){
		
			menu();
			printf("Digite a opção: ");
			scanf("%d", &opcao);
			continuar = validar_opcao(&opcao);
			
			if(!continuar){
				printf("Saindo.\n");
				break;
			}
			
				 switch(opcao) {
           			case 1:
            		    mostrar(numeros, tam);
              			  break;
          			case 2:
               			soma_media(numeros, tam);
               			 break;
                    case 3:
                		 contagem(numeros,tam, &cont_p, &cont_i);
                		 printf("\n\nTotal de pares: %d\nTotal de impares: %d\n\n", cont_p, cont_i);
                         break;
                   case 4:
               			inverter(numeros, tam);
                         break;
               
        }
	}
	free(numeros);
	return 0;
}
