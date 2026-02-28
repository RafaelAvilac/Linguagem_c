/*39. A importancia de R$ 780.000,00 ser a dividida entre tres ganhadores de um concurso. ˆ
Sendo que da quantia total:
• O primeiro ganhador recebera 46%
• O segundo recebera 32%
• O terceiro recebera o restante
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>
#define PREMIO 780.000
int main(void){

	double p_1, p_2, p_3, PART_1 = 0.46, PART_2 = 0.32, PART_3 = 0.22;
	
	p_1 = PREMIO * PART_1;
	p_2 = PREMIO * PART_2;
	p_3 = PREMIO * PART_3;
	
	printf("Primeiro ganhador recebera: %lf\n", p_1);
	printf("Segundo ganhador recebera: %lf\n", p_2);
	printf("Terceiro ganhador recebera: %lf\n", p_3);

 return 0;  
}
