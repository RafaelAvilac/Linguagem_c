#include <stdio.h>
int main(){
	
	int i, n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i = n; i >= 0; i--){
		printf("%d ", i);
		
	}
	
	return 0;
}
