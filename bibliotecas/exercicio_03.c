#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*3. Conversor de temperatura

Um sensor envia a temperatura de um ambiente como texto, por exemplo "25.7". 
Escreva um programa que leia essa temperatura como string, converta para float com atof
e depois informe se o ambiente está frio (abaixo de 18°C), agradável (entre 18°C e 26°C) ou quente (acima de 26°C).*/

void verificar_temp(float convert_temp){
	if(convert_temp > 26){
		printf("Quente\n");
	}else if(convert_temp >= 18){
		printf("Agradável\n");
	}else{
		printf("Frio\n");
	}
}

int main(){
	setlocale(LC_ALL, "");
	
	char temp[10];
	float convert_temp;
	
	printf("Informe a temperatura do ambiente: ");
	scanf("%s", temp);
	
	convert_temp = atof(temp);
	
	printf("Temperatura: %.2f°c\n", convert_temp);
	verificar_temp(convert_temp);
	
	return 0; 
}
