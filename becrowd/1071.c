#include <stdio.h>

int main(void){
	
	int x, y, soma = 0;
	
	scanf("%d %d", &x, &y);
	
	if(x % 2 != 0 && y % 2 != 0){
		soma = x + y;
		printf("%d\n", soma);
	}else if(x % 2 == 0 && y % 2 == 0){
		printf("0\n");
		
	}else{
		if(x % 2 != 0){
			printf("%d\n", x);
		}
		
		if(y % 2 != 0){
			printf("%d\n", y);
		}
	}
	
	
	return 0;
}
