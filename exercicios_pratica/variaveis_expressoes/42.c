/*42. Receba o salario-base de um funcionario. Calcule e imprima o salario a receber, sabendo-
se que esse funcionario tem uma gratificacao de 5% sobre o salario-base. 
Alem disso, ele paga 7% de imposto sobre o salario-base.*/ 

#include <stdio.h>
#define GRAT 0.05
#define IMP 0.07

int main(void){
	
	double salario, valor_receber, valor_adicional, valor_imposto;
	
	printf("Salario-base de um funcionario: ");
	scanf("%lf", &salario);
	
	valor_adicional = salario * GRAT;
	valor_imposto = salario * IMP;
	valor_receber = salario + valor_adicional - valor_imposto;
	
	printf("Salario a receber: %.2lf\n", valor_receber);

	return 0;
}
