/*24. Leia um valor de area em metros quadrados ´ m2 e apresente-o convertido em acres. A
formula de convers ´ ao ˜ e: ´ A = M * 0; 000247, sendo M a area em metros quadrados e ´ A
a area em acres.*/

#include <stdio.h>
#define CONV_ACRES 0.000247
int main(void){
	
	double m_quadrado, acres;
	
	printf("Informe um valor de area em metros quadrados: ");
	scanf("%lf", &m_quadrado);
	
	acres = m_quadrado * CONV_ACRES;
	
	printf("Convesao em acres: %lf\n", acres);
	
	
	return 0;
}
