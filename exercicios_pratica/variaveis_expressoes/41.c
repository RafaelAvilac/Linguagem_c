/*41. Faca um programa que leia o valor da hora de trabalho (em reais) e numero de horas ´
trabalhadas no mes. Imprima o valor a ser pago ao funcionario, adicionando 10% sobre ´
o valor calculado.*/

#include <stdio.h>
#define ADICIONAL 0.1

int main(void){
		
	float horas_mes, valor_horas; 
	
	printf("Informeo valor da hora de trabalho (em reais) e numero de horas trabalhadas no mes:\n");
	scanf("%f %f", &valor_horas, &horas_mes);
	
	float valor_adicional = valor_horas * horas_mes * ADICIONAL;
	float valor_receber = valor_horas * horas_mes + valor_adicional;
	
	printf("Valor a ser pago ao funcionario: %.2f\n", valor_receber);
	
	return 0;
}

