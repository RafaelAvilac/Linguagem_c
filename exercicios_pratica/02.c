#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
float ler_nota(){
	float nota_valida;
	printf("Informe a nota: ");
	scanf("%f", &nota_valida);
	while (nota_valida < 0 || nota_valida >10){
		printf("Nota invalida.\nDigite novamente: ");
		scanf("%f", &nota_valida);
	}
	return nota_valida;
}

int main(){
	setlocale(LC_ALL, "");
	
	float nota_1 = 0, nota_2 = 0, nota_3 = 0, media = 0;
	
	printf("1º Aluno\n");
	nota_1 = ler_nota();
	system("cls");
	
	printf("2º Aluno\n");
	nota_2 = ler_nota();
	system("cls");
	
	printf("3º Aluno\n");
	nota_3 = ler_nota();
	system("cls");
	
	media = (nota_1 + nota_2 + nota_3) / 3;
	
	printf("A média foi de: %.2f", media);
	
	return 0;
}
