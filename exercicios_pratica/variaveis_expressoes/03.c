//3. Pec¸a ao usuario para digitar tr ´ es valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(void){
	
	int n1, n2, n3;
	
	printf("digite tres numeros:\n");
	scanf("%d %d %d", &n1,&n2,&n3);
	
	int soma = n1 + n2 + n3;
	printf("Soma: %d\n", soma);
	
	return 0;
}
