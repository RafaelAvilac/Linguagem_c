#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void ){


char palavra[50] = {"abacate"};
char *letra;

letra = strrchr(palavra, 'a');

printf("\n%c\n", *letra); 
printf("\n%c\n", *(letra + 1)); 
printf("\n%c\n", *(letra + 2));
 
	return 0;
	
}
