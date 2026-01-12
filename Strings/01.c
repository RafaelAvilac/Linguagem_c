#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char palavra[30];
	
	printf("Digite seu nome: ");
	//scanf("%s", palavra);

   //scanf("%30[^\n]", palavra);

	//gets(palavra);
	fgets(palavra, 30, stdin);
	for(int i = 0; palavra[i] != '\0'; i++){
		
		printf("%d = %d\n",i, palavra[i]);
		printf("\n");
	}
	
	
	return 0;
}
