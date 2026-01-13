#include <stdlib.h>
#include <stdio.h>

#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char palavra[30];
	int  cont = 0;
	
	printf("Digite seu nome: ");
	//scanf("%s", palavra);
    //scanf("%30[^\n]", palavra);
	//gets(palavra);
	fgets(palavra, 30, stdin);
	//contando string sem o \n e \0.
	for(int i = 0; palavra[i] != '\0'; i++){
		if(palavra[i] != '\n'){
			cont++;
		}
	}
	printf("total caravteres: %d", cont);
	return 0;
}
