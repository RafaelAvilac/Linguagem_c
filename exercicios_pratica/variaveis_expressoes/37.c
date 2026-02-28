/*37. Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%*/

#include<stdio.h>

int main(void){
	
	float preco, desconto;
	
	printf("Informe o valor de um produto: ");
	scanf("%f", &preco);
	
	desconto = preco - (preco * 12 / 100);
	
	printf("Desconto foi: %.2f\n", desconto);
	
	return 0;
}
