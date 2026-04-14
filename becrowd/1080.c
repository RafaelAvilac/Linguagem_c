#include <stdio.h>

int main(void){
	
	int n[5], maior = n[0], posisao;
	
	for(int i = 0; i < 5; i++){
		
		scanf("%d", &n[i]);
	}
	for(int i = 1; i < 5; i++){
		
		if(n[i] > maior){
			maior = n[i]; 
			posisao = i + 1;
		}
		
	}
	printf("%d\n%d\n", maior, posisao);
	
	return 0;
}
