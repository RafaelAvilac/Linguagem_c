//1038

#include <stdio.h>

int main(void){
	
	int cod, qtd;
	float valor = 0;
	scanf("%d %d", &cod, &qtd);
	
	if(cod){
		valor = (float)(qtd * 4.00);
	
	}else if(cod == 2){
		valor = (float)(qtd * 4.50);
		
		
	}else if(cod == 3){
		valor = (float)(qtd * 5.00);
	
		
	}else if(cod == 4){
		valor = (float)(qtd * 2.00);
	
		
	}else if(cod == 5){
		valor = (float)(qtd * 1.50);
		
	}
	printf("Total: %.2f", valor);
	
	return 0;
}
