/*38. Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que ´
ele recebeu um aumento de 25%.*/

#include <stdio.h>


int main(void){
	
	float salario, novo_salario;
	float AUMENTO = 0.25;
	
	printf("Informe o salario de um funcionario: ");
	scanf("%f", &salario);
	
	novo_salario = salario + (salario * 0.25);
	
	printf("Novo salario com aumento de 25%%: %.2f\n", novo_salario);
	
	
	return 0;
}
