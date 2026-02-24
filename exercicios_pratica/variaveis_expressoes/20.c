/* 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula ´
de conversao e:L = K /0.45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <stdio.h>
#define CONVERSAO_LI 0.45

int main(void){
	
	double kg, li;
	
	printf("Digite um valor de massa em quilogramas: ");
	scanf("%lf", &kg);
	
	li = kg / CONVERSAO_LI;
	
	printf("Conversao em libras: %lf\n", li);
	
	return 0;
}
