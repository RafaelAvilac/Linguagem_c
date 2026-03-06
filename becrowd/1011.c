#include <stdio.h>
#include <math.h>

int main(void){
	
	
	double x_1, x_2, y_1, y_2, distancia;
	
	
	scanf("%lf %lf", &x_1, &y_1);
	scanf("%lf %lf", &x_2, &y_2);
	
	distancia = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
	
	printf("%.4lf\n", distancia);
 	
	return 0;
}
