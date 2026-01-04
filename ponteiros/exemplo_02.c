#include <stdio.h>

void troca(int *a, int *b){
	int x;
	
	x = *a;
	*a = *b; 
*b = x;		
}

int main(){
	
	int a = 10, b = 20; 
	
	printf("Antes valor a = %d e b = %d.", a, b);
	
	troca(&a, &b);
	
	printf("\nAgora valor a = %d e b = %d.", 	a, b);
	
	
	return 0;
}
