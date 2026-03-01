/*40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faca um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera ser
paga, sabendo-se que sao descontados 8% para imposto de renda.*/

#include<stdio.h>
#define VALOR_DIA 30.00

int main(void){
	
	int dias;
	double  IMPOSTO = 0.08, total_receber, imposto_pagar;
	
	printf("Numero de dias trabalhados pelo encanador: ");
	scanf("%d", &dias);
	
	imposto_pagar = (double) dias * VALOR_DIA * IMPOSTO;
	total_receber = (double) dias * VALOR_DIA - imposto_pagar;
	
	printf("Quantia liquida que devera ser paga: %.2lf\n", total_receber);
	
	return 0;
}

