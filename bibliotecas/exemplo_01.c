#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int base = 2 , expoente = 3;
	
	printf("%d elevado %d: %.2f\n\n", base, expoente, pow(base, expoente));
	
	printf("Raiz quadrada de 25: %.2f\n\n", sqrt(25));
	
	srand(time(NULL));  // inicializa o gerador

    int numero = rand() % 6 +5; // 0 a 99

    printf("Numero aleatorio: %d\n", numero);

	
	return 0;
}
