/*Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.*/

#include<stdio.h>

int main(void){
	
	int idade, anos, meses, dias;
	
	scanf("%d", &idade);
	
	anos = idade / 365;
	idade %= 365; 		  // dias restantes após os anos
	
	meses = idade / 30;   // meses a partir do resto
			  
	dias = idade % 30;         // dias restantes
	
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	return 0;
}
