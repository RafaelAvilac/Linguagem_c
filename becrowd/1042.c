/*1042-Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, 
uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.*/

#include <stdio.h>

int main(void){
	
	int n1, n2, n3, aux;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1 > n2 && n1 > n3){
		aux = n3; 
		n3 = n1;
		n1 = aux;
	}else if(n2 > n1 && )
	
	
	
	return 0;
}
