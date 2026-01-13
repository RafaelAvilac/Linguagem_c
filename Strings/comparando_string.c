#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char palavra[50] = {"bom dia"};
	char palavra_1[50] = {"bom dia!"};
	
	printf("resultado: %d", strcmp(palavra, palavra_1));
	
	
	
	
	return 0;
}
