#include <stdio.h>
#include <locale.h>

#define LIN 5
#define COL_N 50
#define COL 3

void preencher_notas(char nomes[][COL_N], int notas[][COL]){
	for(int i = 0; i < LIN; i++){
		printf("Informe o nome do %dº aluno: ", i +1);
		scanf(" %[^\n]", nomes[i]);
		for(int j = 0; j < COL; j++){
			printf("%dª nota: ", j +1);
			scanf("%d", &notas[i][j]);
		}
	printf("\n");
	}
}
void exibir_dados(char nomes[][COL_N], int notas[][COL]){
	printf("\n===== Relatório de alunos =====.\n");
	for(int i = 0; i < LIN; i++){
		printf("Aluno %d: %s\nNota: \n", i + 1, nomes[i]);
		for(int j = 0; j < COL; j++){
			printf("%3d\t", notas[i][j]);
		}
	printf("\n===============================\n");
	printf("\n");
	}
}
void calcular_media(int notas[LIN][COL], float medias[LIN]){
	
	
	for(int i = 0; i < LIN; i++){
		int somar = 0;
		for(int j = 0; j < COL; j++){
			somar += notas[i][j];
		}
		medias[i] = (float)somar / COL;
    }		
}
void exibir_medias_alunos(char nomes[][COL_N], float medias[LIN]){
	
	printf("Médias por alunos.\n");
	for(int i = 0; i < LIN; i++){
		printf("Aluno %d (%s) -> média: %.2f\n", i + 1, nomes[i], medias[i]);
	}
	printf("\n\n");
}
float media_geral(float medias[LIN] ){
	float media = 0, somar = 0;
	for(int i = 0; i < LIN; i++){
		somar += medias[i];
	}
	media = somar / LIN;
	return media;
}
void exibir_maior_menor(char nomes[LIN][COL_N], float medias[LIN]){
	
	float maior = medias[0], menor = medias[0];
	int cont_maior = 0, cont_menor = 0;
	for(int i = 1; i < LIN; i++){
		if(medias[i] > maior){
			maior = medias[i];
			cont_maior = i;
		}
		if(medias[i] < menor){
			menor = medias[i];
			cont_menor = i;
		}
	} 
	printf("Maior média: %.2f, Aluno %s.\n", maior, nomes[cont_maior] );
	printf("Menor média: %.2f, Aluno %s.\n", menor, nomes[cont_menor] );
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[LIN][COL_N];
	int notas[LIN][COL];
	float medias[LIN], media_total;
	
	preencher_notas(nomes, notas);	
	exibir_dados(nomes, notas);
	 calcular_media(notas, medias);
	exibir_medias_alunos(nomes, medias);
	media_total = media_geral(medias);
	
	printf("Média geral da turma: %.2f\n", media_total);
	exibir_maior_menor(nomes, medias);
	
	
	return 0;
}
