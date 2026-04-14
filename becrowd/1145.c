#include <stdio.h>

int main() {
    int x, y, cont = 1;
    scanf("%d %d", &x, &y);
    
    for(int i = 1; i <= y; i += x) {
        for(int j = 1; j <= x && cont <= y; j++) {
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }
    
    return 0;
}
