/*27. calculadora*/
//

#include <stdio.h>

    int main() {

       int i, j;
       
       for(i = 1; i <=10; i++){
       		for(j = 1; j <= 10; j++){
       			
       			printf("%2dx%2d=%-4d\t", j, i, j * i);
       			
			   }
			   printf("\n");
	   }
       
        return 0;
    }



