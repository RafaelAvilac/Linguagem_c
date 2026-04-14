#include <stdio.h>

int main() {
    int dia_ini, hora_ini, min_ini, seg_ini;
    int dia_fim, hora_fim, min_fim, seg_fim;
    
    // Lê primeira linha: "Dia X"
    scanf("Dia %d", &dia_ini);
    // Lê hora inicial: "hh : mm : ss"
    scanf("%d : %d : %d", &hora_ini, &min_ini, &seg_ini);
    // Lê terceira linha: "Dia Y"
    scanf("Dia %d", &dia_fim);
    // Lê hora final: "hh : mm : ss"
    scanf("%d : %d : %d", &hora_fim, &min_fim, &seg_fim);
    
    // Ajusta diferenças com empréstimos
    int seg = seg_fim - seg_ini;
    int min = min_fim - min_ini;
    int hora = hora_fim - hora_ini;
    int dia = dia_fim - dia_ini;
    
    if (seg < 0) {
        seg += 60;
        min--;
    }
    if (min < 0) {
        min += 60;
        hora--;
    }
    if (hora < 0) {
        hora += 24;
        dia--;
    }
    
    // Saída formatada
    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
    
    return 0;
}
