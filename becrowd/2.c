/*2. Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira ´
vez deve usar a estrutura de repetic¸ao ˜ for, a segunda while, e a terceira do while.*/

#include <stdio.h>

int main(){
	
	int n = 100, i;
	
	for( i = 1; i <= n; i++){
		printf("%d\n", i);
	}
	
	i = 1;
	
    while(i <= n){
		printf("%d\n", i);
		i++;
	}
	i = 1;
	do{
		printf("%d\n", i);
		i++;
	}while(i <= n);
	
	return 0;
}
