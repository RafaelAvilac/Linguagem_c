#include <stdio.h>

int main(){
	
	int idade = 0;
	
	printf("Informe sua idade: ");
		scanf("%d", &idade);	
		
		if (idade >= 18) {
			printf("Maior de idade.\n");
		}else {
			printf("Menor de idade.");
		}
	
	return 0;
}
