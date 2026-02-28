/*25. Leia um valor de area em acres e apresente-o convertido em metros quadrados ´ m2. A
formula de conversao e: M = A * 4048,58 sendo M a area em metros quadrados e  A a
area em acres*/

#include <stdio.h>
#define CONV_MT 4048.58

int main(void){
	
	double acres, mt_2;
	
	printf("Informe um valor de area em acres: ");
	scanf("%lf", &acres);
	
	mt_2 = acres * 4048.58;
	
	printf("Conversao metros: %.2lf\n", mt_2);
	
	return 0;
}
