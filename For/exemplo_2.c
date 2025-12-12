#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int dias;
	
	printf("Informe a quandidade de dias que treinou: ");
	scanf("%d", &dias);
	system("cls");
	for(int i = 0 ; i < dias; i++){
		printf("%d dia, Ta pago!\n", i +1);
	}
	printf("Treino concluido!!!");
	return 0;
}
