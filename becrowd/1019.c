/*Timelimit: 1
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, 
onforme exemplo fornecido.*/

#include <stdio.h>

int main(void){
	
	int temp, horas, minutos, segundos;
	
	scanf("%d", &temp);
	
	horas = temp / 3600;           // 1 hora = 3600 segundos
    temp %= 3600;                  // resto após tirar as horas
    
    minutos = temp / 60;            // minutos a partir do resto
    segundos = temp % 60; 
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
