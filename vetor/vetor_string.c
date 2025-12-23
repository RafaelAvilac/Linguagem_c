#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main (){
 setlocale(LC_ALL, "");	
 
	char nomes[3][10];
	
	
	for(int i = 0; i < 3; i ++){
			printf("Informe o %dº nome: ", i + 1 );
			scanf("%s", nomes[i]);
	}
	system("cls");
	
	printf("\n");
	
	for(int i = 0; i < 3; i++){
		printf("Nome: %s\n", nomes[i]);
	}
	
	return 0;
}
