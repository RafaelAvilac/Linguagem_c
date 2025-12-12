#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char operacao;
	float a , b, total;
	
	printf("************* Calculadora *************\n");
	printf("[+] Adicao          \t[-] Subtracao\n[x] Multiplicacao\t[/] Divicao\n");
	printf("***************************************\n");

	printf("Informe a opcao: ");
	scanf("%c", &operacao);
	system("cls");
		switch (operacao){
		case '+':
				printf("Informe o primeiro valor: ");
				scanf("%f", &a);
				printf("Informe o segundo valor: ");
				scanf("%f", &b);
				total = a + b;
				printf("A soma de %.2f + %.2f = %.2f", a, b, total);
			break;
		case '-':
				printf("Informe o primeiro valor: ");
				scanf("%f", &a);
				printf("Informe o segundo valor: ");
				scanf("%f", &b);
				total = a - b;
				printf("A subtracao de %.2f - %.2f = %.2f", a, b, total);
			break;
		case 'x':
		case 'X':
				printf("Informe o primeiro valor: ");
				scanf("%f", &a);
				printf("Informe o segundo valor: ");
				scanf("%f", &b);
				total = a * b;
				printf("A multiplicacao de %.2f x %.2f = %.2f", a, b, total);
			break;
		case'/':
				printf("Informe o primeiro valor: ");
				scanf("%f", &a);
				printf("Informe o segundo valor: ");
				scanf("%f", &b);
			
				if (b == 0) {
					
      			printf("Erro: Divisao por zero!\n");
   			  
			 	} else {
			 		
       			total = a / b;
       			
        		printf("A divisao de %.2f / %.2f = %.2f\n", a, b, total);
    }
			
			
			break;
		default:
			printf("Informacao invalida");
		}
	
	
	
	return 0;
}
