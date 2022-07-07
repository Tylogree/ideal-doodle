#include <stdio.h>
// f(x) = ax + b
int funcao(int range, int arga, int argb){
    printf("\n###############\n");
    int y;
    for(int i = 0; i <= range; i++){
        y = (arga * i) + argb;
        printf("\nx = %d | y = %d", i, y);
    }
    printf("\n\n###############\n");
    printf("\n\n< done. >\n\n");
}
