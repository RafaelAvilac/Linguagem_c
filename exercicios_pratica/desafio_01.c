#include <stdio.h>
#include <locale.h>

void preencher_nomes(char nomes[][20]){
	
	for(int i = 0; i < 5; i++){
		printf("Informe o %dº nome: ", i +1);
		scanf("%19s", nomes[i]);
	}	
}
int contar_nomes_com_caractere(char nomes[][20], char carac){
	int cont = 0;
	for(int i = 0; i < 5; i++){
		for(int j = 0; nomes[i][j] != '\0'; j++){
			if(nomes[i][j] == carac){
				cont++;
				break;
			}
		}
	}
	return cont;
}
void exibir_nomes(char nomes[][20], char carac){
	printf("Nomes com o caractere buscado:\n");
	for(int i = 0; i < 5; i++){
		for(int j = 0; nomes[i][j] != '\0'; j++){
			if(nomes[i][j] == carac){
				printf("%s\t", nomes[i]);
				break;
			}
		}
	}
}
int main(){
	setlocale(LC_ALL, "");
	
	char nomes[5][20], carac;
	preencher_nomes(nomes);
	
	printf("Informe um caractere para busca: ");
	scanf(" %c", &carac);
    int total_carac = contar_nomes_com_caractere(nomes, carac);
    printf("\nO caractere '%c' foi encontrado em %d nome(s).\n", carac, total_carac);
    exibir_nomes(nomes, carac);
	return 0;
}
