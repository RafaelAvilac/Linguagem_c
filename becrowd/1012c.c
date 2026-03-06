/* Leia um valor inteiro. 

A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida,
a quantidade mínima de notas de cada tipo necessárias,
conforme o exemplo fornecido. 
Não esqueça de imprimir o fim de linha após cada linha, 
caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/

#include <stdio.h>
int main(void){
	
	int valor, notas100, notas50, notas20, notas10,  notas5, notas2, notas1;
	
	scanf("%d", &valor);
	
	if(valor <0 || valor >1000000){
		printf("Presentation Error");
		return 1;
	}
	
	int original = valor;
    
    printf("%d\n", original);
   
    notas100 = valor / 100;
    valor %= 100;
    
    notas50 = valor / 50;
    valor %= 50;
    
    notas20 = valor / 20;
    valor %= 20;
    
    notas10 = valor / 10;
    valor %= 10;
    
    notas5 = valor / 5;
    valor %= 5;
    
    notas2 = valor / 2;
    valor %= 2;
    
    notas1 = valor;

 	printf("%d nota(s) de R$ 100,00\n", notas100);
	printf("%d nota(s) de R$ 50,00\n", notas50);
	printf("%d nota(s) de R$ 20,00\n", notas20);
	printf("%d nota(s) de R$ 10,00\n", notas10);
	printf("%d nota(s) de R$ 5,00\n", notas5);
	printf("%d nota(s) de R$ 2,00\n", notas2);
	printf("%d nota(s) de R$ 1,00\n", notas1);
	
	return 0;
}
