/* 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula ´
de conversao  e: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.*/

#include<stdio.h>
#define CONVERSAO_KG 0.45

int main(void){
	
	double li, kg;
	
	printf("Digite um valor de massa em libras: ");
	scanf("%lf", &li);
	
	kg = li * CONVERSAO_KG;
	
	printf("Conversao em quilogramas: %.3lf\n", kg);
	
	
	return 0;
}
