#include <stdio.h>

/*4. Classificar notas de alunos
Crie uma função que receba a nota de um aluno e imprima:

Aprovado (nota >= 6)
Recuperação (nota >= 4 e < 6)
Reprovado (nota < 4)*/

void verificar_nota(float nota){
	
	if(nota >= 6){
		printf("Aprovado\n");
	}else if(nota >= 4 ){
		printf("Recuperacao\n");
	}else{
		printf("Reprovado.");
	}	
}

int main (){
	
	float nota;
	
	printf("Informe sua nota: ");
	scanf("%f", &nota);
		while(nota < 0 || nota > 10){
   			 printf("Nota invalida. Informe novamente: ");
   			scanf("%f", &nota);
		}
	verificar_nota(nota);

	return 0;
}
