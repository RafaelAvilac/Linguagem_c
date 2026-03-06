/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. 
Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. 
Cada linha corresponde a uma das áreas descritas acima, 
sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. 
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.*/

#include <stdio.h>

int main(void){
	
	double a, b, c, area, pi;
	pi = 3.14159;
	
	scanf("%lf %lf %lf", &a, &b, &c );
	
	area = (a * c) / 2;
	
	printf("TRIANGULO: %.3lf\n", area);
	
	area = pi * (c * c);
	
	printf("CIRCULO: %.3lf\n", area);
	
	area = ((a + b) * c) / 2;
	
	printf("TRAPEZIO: %.3lf\n", area);
	
	area = b * b;
	printf("QUADRADO: %.3lf\n", area);
	area = a * b;
	printf("RETANGULO: %.3lf\n", area);
	
	return 0;
}
