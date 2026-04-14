#include <stdio.h>

int main(void){
	
	int cod;
	
	printf("Informe o cod do funcionario: ");
	scanf("%d", &cod);
	
	if(cod<101 || cod > 106){
		printf("Codigo invalido\n");
	}else if(cod == 101){
		printf("Vendedor\n");
	}else if(cod == 102){
		printf("Atendente\n");
	}else if(cod == 103){
		printf("Auxiliar tecnico\n");
	}else if(cod == 104){
		printf("Assistente\n");
	}else if(cod == 105){
		printf("Cordenador de grupo\n");
	}else{
		printf("Gerente\n");
	}
	
	return 0;
}
