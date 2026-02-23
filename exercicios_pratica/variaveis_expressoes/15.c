/*15. Leia um angulo em radianos e apresente-o convertido em graus. A f ˆ ormula de convers ´ ao ˜
e: ´ G = R * 180/pi, sendo G o angulo em graus e ˆ R em radianos e pi = 3:14.*/

#include <stdio.h>
#define PI 3.14

int main(void){
	
	double angulo, radianos;
	
	printf("Informe o angulo em radianos: ");
	scanf("%lf", &radianos);
	
	angulo = (radianos * 180) / PI;
	
	printf("Angulo: %lf", angulo);
	
	return 0;
}
