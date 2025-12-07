#include <stdio.h>

int main(){
	
	int idade_a = 0, idade_b = 0, idade_total = 0;
	
	printf("Informe a primeira idade: ");
		scanf("%d", &idade_a);
		
	printf("\nInforme a segunda idade: ");
		scanf("%d", &idade_b);
	
	idade_total = idade_a + idade_b;
	printf("\nA idade total e : %d", idade_total);
	
	return 0;
}
