#include<stdio.h>

int main(void){
	
	int n1, n2, diferenca;
	
	scanf("%d %d", &n1,&n2);
	
	if(n1 == n2){
		printf("Numeros %d e %d sao iguais", n1, n2);
	}else if(n1 > n2){
		diferenca = n1 - n2;
		printf("Maior: %d\n", n1);
		printf("Diferenca: %d\n", diferenca);
	}else{
		diferenca = n2 - n1;
		printf("Maior: %d\n", n2);
		printf("Diferenca: %d\n", diferenca);
	}
	
	return 0;
}
