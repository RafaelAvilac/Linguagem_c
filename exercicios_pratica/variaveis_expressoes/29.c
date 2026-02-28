/*29. Leia quatro notas, calcule a media aritmetica e imprima o resultado.*/

#include <stdio.h>
#define QTD_NOTAS 4

int main(void){
	
	float a, b, c, d, media;
	
	printf("Informe 4 notas:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	media = (a + b + c + d) / QTD_NOTAS;
	
	printf("A media aritmetica e: %.2f\n", media);
	
	
	return 0;
}
