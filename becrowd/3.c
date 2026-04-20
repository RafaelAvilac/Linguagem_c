/*Fac¸a um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a ´
contagem.*/

#include <stdio.h>
int main(){
	
	int cont = 10;
	
	while(cont >= 0){
		printf("%d ", cont);
		cont--;
	}
	printf("\nFIM!\n");
	
	return 0;
}
