#include <stdio.h>  // Inclusão da biblioteca padrão de entrada e saída

int main(void){     // Função principal que retorna um inteiro, sem parâmetros
	
	int x, y, z;    // Declaração de três variáveis inteiras
	
	x = y = 10;     // Atribuição em cadeia: y recebe 10, depois x recebe o valor de y (10)
	                // Agora x = 10, y = 10
	
	z = ++x;        // PRÉ-INCREMENTO: primeiro incrementa x (x passa a ser 11), 
	                // depois atribui a z. Portanto: x = 11, z = 11
	
	x-= x;          // Equivalente a: x = x - x ? 11 - 11 = 0
	                // Agora x = 0
	
	y++;            // PÓS-INCREMENTO: y = 10 + 1 = 11
	                // Agora y = 11
	
	x = x + y - (z--);  // Expressão: x (0) + y (11) - (z com pós-decremento)
	                    // z-- significa: usa o valor atual de z (11) na expressão,
	                    // e DEPOIS decrementa z (z passa a ser 10)
	                    // x = 0 + 11 - 11 = 0
	                    // Agora x = 0, y = 11, z = 10
	
	printf("%d\n", x);  // Imprime o valor atual de x: 0
	                    // O \n quebra a linha
	
	printf("%d", (++x)); // PRÉ-INCREMENTO em x: x passa de 0 para 1,
	                     // e este novo valor (1) é passado para o printf
	
	return 0;        // Retorna 0 indicando que o programa terminou com sucesso
}
