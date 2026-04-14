#include <stdio.h>

int main(void){
	
	int a, b, resultado;
	
	scanf("%d %d", &a, &b);
	
	if(a > b){
		return 1;
	}
	
	for(int i = a; i <= b; i++){
	
		for(int j = 1; j <= 10; j++){
			
			printf("%3d x %3d = %3d\n", i, j, i * j);
			
		}
		printf("\n");
	}
	return 0;
}
