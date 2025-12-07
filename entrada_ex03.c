#include <stdio.h>

int main(){
	
	int num_1, num_2;
	
	printf("Informe o primeiro numero: ");
		scanf("%d", &num_1);
		
	printf("Informe o segundo numero: ");
		scanf("%d", &num_2);
	
	printf("\nAdicao: %d + %d = %d", num_1, num_2, num_1 + num_2);
	printf("\nSubtracao: %d - %d = %d", num_1, num_2, num_1 - num_2);
	printf("\nMutiplicacao: %d x %d = %d", num_1, num_2, num_1 * num_2);
	printf("\nDivisao: %d / %d = %d", num_1, num_2, num_1 / num_2);
	printf("\nModulo: %d %% %d = %d", num_1, num_2, num_1 % num_2);

		
	return 0;
}
