#include <stdio.h>

// f(x) = ax + b
//
// função para calcular valores de y (função afim)

int funcao(int range, int arga, int argb){
    printf("\n###############\n");
    int y;
    for(int i = 0; i <= range; i++){
        y = (arga * i) + argb; // Aqui, é onde a var y recebe o valor
        printf("\nx = %d | y = %d", i, y);
    }
    printf("\n\n###############\n");
    printf("\n\n< done. >\n\n");
}


// função para perguntar.
void angebot(char casete){
	printf("\nValor de %c >> ", casete);
}

int main(){
	int a;
	int b;
	int r;

	// input do usuário
	angebot('a'); scanf("%d", &a);
	angebot('b'); scanf("%d", &b);
	angebot('r'); scanf("%d", &r);
	

	// execução da função
	funcao(r, a, b);
}
