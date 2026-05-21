#include <stdio.h>

int main(){
	
	int x, y, aux;
	
	scanf("%d %d", &x, &y);
	
	if(x > y){
		aux = x;
		x = y;
		y = aux;
	}
	
	for(int i = 1; i <= y; i++){
		for(int j = i; j <= x; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}
