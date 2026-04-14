#include <stdio.h>

int main(void){
	
	int x, y,soma = 0;
	 
	 scanf("%d %d", &x, &y);
	 
	 if(x > y){ //garante que x sempre seja menor que y
	 	int temp;// variavel para realizar a troca
	 	temp = x;
	 	x = y;
	 	y = temp;
	 }
	 
	 for(int i = x +1; i < y; i++){// começa um numero apos x e finaliza um ates de y
	 
	 	if(i % 2 != 0){
	 		soma+=i;
		 }
	 }
	 printf("%d\n", soma);
	
	return 0;
}
