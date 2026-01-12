#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	
	
	char palavras[50] = {"oi."};
	
	strcat(palavras, " bom dia.");
	
	printf("String resultante: %s\n", palavras);
	
	return 0;
}
