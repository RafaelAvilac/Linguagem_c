//
// Created by rafae on 28/04/2026.
//
#include <stdio.h>
int main () {

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= n + 1; j++) {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}