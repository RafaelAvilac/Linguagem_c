/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/

#include <stdio.h>
#define DESC_DEZ 0.10
#define COMISSAO 0.05

int main(void){
	
	float valor, parcela, desc_a_vista, comissao_avista, comissao_parcelada;
	
	printf("Informe o valor: ");
	scanf("%f", &valor);
	
	desc_a_vista = valor - (valor * DESC_DEZ);
	parcela = valor / 3;
	comissao_avista = desc_a_vista * COMISSAO;
	comissao_parcelada = valor * COMISSAO;
	
	printf("\n=== RESUMO DA VENDA ===\n");
	printf("Valor com desconto de 10%%: R$%.2f\n", desc_a_vista); 
	printf("Valor em 3 parcelas sem juros: R$%.2f\n", parcela); 
	printf("Comissao do vendedor sobre venda a vista 5%%: R$%.2f\n", comissao_avista);
	printf("Comissao do vendedor sobre venda parcelada 5%%: R$%.2f\n", comissao_parcelada);
	
	return 0;
}
