#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	int numero;
	
	printf("=================== Tabuada =================== \n");
	printf("Informe o numero que deseja ver a tabuada: \n");
	printf("=============================================== \n");
	scanf("%d", &numero);
	system("cls");
	printf("Tabuada do %d:\n", numero);
	for(int i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", numero, i, numero * i );
	}
	
	return 0;
}
