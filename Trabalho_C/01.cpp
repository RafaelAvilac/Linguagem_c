#include <stdio.h>
int main() {
    int *a;
    int b;
    a=&b;
    *a= 10;
    printf("%d\n", *a);
    printf("%d\n", b);
    printf("%p\n", a);


}
// Created by rafae on 16/06/2026.
//
