/*O Analista de Texto (Contador de Vogais)
Agora vamos sair dos números e manipular Texto (Strings).
Lembre-se: em C, uma "string" é apenas um vetor de caracteres (char vetor[]) que termina com um caractere invisível especial: o \0 (null terminator).

Objetivo:
Peça ao usuário para digitar uma frase (pode ter espaços).
Crie uma função que receba essa frase.
Percorra a frase letra por letra e conte quantas vogais (A, E, I, O, U) existem.
O programa deve contar tanto maiúsculas quanto minúsculas (A e a).
Dicas Técnicas:
Leitura: Use fgets(variavel, tamanho, stdin) em vez de scanf, pois o scanf para de ler quando encontra um espaço (ex: "Bom dia" viraria só "Bom").
Biblioteca <ctype.h>: Use a função toupper(letra) para converter tudo para maiúsculo antes de comparar. Isso simplifica o if.
Fim da String: O laço for deve rodar enquanto a letra não for o fim da string (\0).*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define TAM 100
 void convert_maiuscula(char *str){
 	setlocale(LC_CTYPE, "Portuguese_Brazil.UTF-8");
 	for(int i = 0; str[i] != '\0'; i++){
 		str[i] = toupper((unsigned char)str[i]);
	 }
 }
 int contar_vogais(char *frase){
 	int total = 0;
 	for(int i = 0; frase[i] != '\0'; i++){
 		if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I'|| frase[i] == 'O'|| frase[i] == 'U'){
 			total++;
		 }
	 }
	 return total;
 }
int main(void){
	setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
	char frase[TAM];
	int vogais;
	
	printf("Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	frase[strcspn(frase, "\n")] = '\0';
	
	convert_maiuscula(frase);
	printf("A Frase : %s\n", frase);
	vogais = contar_vogais(frase);
	printf("Tem %d, vogais.\n", vogais);
	
	return 0; 
}
