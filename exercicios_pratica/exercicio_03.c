#include <stdio.h>
#include <locale.h>

/*3 Contagem condicional (pares e ímpares)

Enunciado:

Crie um programa em C que:

Leia 12 números inteiros digitados pelo usuário

Armazene esses números em um vetor

Percorra o vetor e conte:

quantos números são pares

quantos números são ímpares

Ao final, exiba essas duas quantidades na tela*/

void preencher_numeros(int numeros[]){
	for(int i = 0; i < 12; i++){
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numeros[i]);	
	}	
}
void verificar_paridade(int numeros[]){
	int cont_par = 0, cont_impar = 0;
	for(int i = 0; i < 12; i++){
		if(numeros[i] % 2 == 0){
			cont_par++;
		}else{
			cont_impar++;
		}
	}
	printf("Quantidade de números pares: %d\n", cont_par);
	printf("Quantidade de números ímpares: %d\n", cont_impar);
}
int main(){
	setlocale(LC_ALL, "");
	
	int numeros[12], sair = 1;
	
	
	while(sair != 0){
	
		
		preencher_numeros(numeros);
		verificar_paridade(numeros);
		
		printf("Digite 0 para sair ou 1 para continuar: ");
		scanf("%d", &sair);
			while(sair <0 || sair > 1){
				printf("Opção inválida\n");
				printf("Digite 0 para sair ou 1 para continuar: ");
				scanf("%d", &sair);
			}
	}
	
	
	return 0;
}
