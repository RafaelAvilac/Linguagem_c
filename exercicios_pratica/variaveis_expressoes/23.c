/*23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula ´
de conversao ˜ e: ´ J = M
0;91, sendo J o comprimento em jardas e M o comprimento em
metros. */

#include <stdio.h>
#define CONV_JAR 0.91

int main(void){
	
	double jar, mt;
	
	printf("Digite um valor de comprimento em metros: ");
	scanf("%lf", &mt);
	
	jar = mt/CONV_JAR;
	
	printf("Conversao em jardas: %.2lf\n", jar);
	
	return 0;
}
