#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que exiba um menu com 4 opções de lanches:
1-Hambúrgue
2-Cachorro-quente
3-Pizza
4-Sair*/


int main(){
	
	int opcao; 
	printf("================ Menu ================\n");
	printf("[1]- Hamburger        \t[3]- Pizza\n[2]- Cachorro-quente \t[4]- Sair\n");
	printf("======================================\n");
	printf("Opcao desejada: ");
	scanf("%d",&opcao);
	system("cls");
	switch (opcao) {
		
		case 1:
			printf("Hamburger selecionado\n");
			break;
		case 2:
			printf("Cachorro-quente selecionado\n");
			break;
		case 3:
			printf("Pizza selecionado\n");
			break;
		case 4:
			printf("Saindo\n");
			break;
		default:
			printf("Informacao invalida\n");			
		
	}
	
	return 0;
}

