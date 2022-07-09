#include <stdio.h>

// funções matemáticas.


// Função de 1° Grau: f(x) = ax + b
// Uso: 
// funcao1g(numero_de_resultados, valor_a, valor_b, "arquivo_para_armazenamento.txt");
//
int funcao1g(int range, int arga, int argb, char *arquivo){
	
	// Pointer do arquivo de armazenamento
	FILE *pointer;
	pointer = fopen(arquivo, "a");

	// Criação de um cabeçalho para o arquivo
	char *cabecalho = "Função de 1° grau: %d resultados.\nValor de A = %d\nValor de B = %d\n", range, arga, argb;
	fprintf(pointer, cabecalho);

	// Cálculo da função em si
    	for(int i = 0; i <= range; i++){
        	int y = (arga * i) + argb; // Aqui, é onde a var y recebe o valor
        	char *response = "\nx = %d || y = %d", i, y; // Armazenamento do valor Y e X em uma string
		fprintf(pointer, response); // escrita no arquivo
    	}
	    	
	// final
	free(y); free(response); free(cabecalho); // Excluir variáveis pré-feitas
}


// Função de 2° Grau: f(x) = ax² + bx + c
// Uso:
// funcao2g(numero_de_resultados, valor_a, valor_b, valor_c, "arquivo_para_armazenamento.txt");
//
int funcao2g(int range, int arga, int argb, int argc, char *arquivo){
	
	// Pointer do arquivo de armazenamento
	FILE *pointer;
	pointer = fopen(arquivo, "a");

	// Criação de um cabeçalho para o arquivo
	char *cabecalho = "Função de 2° grau: %d resultados.\nValor de A = %d\nValor de B = %d\nValor de C = %d\n", range, arga, argb, argc;
	fprintf(pointer, cabecalho);

	// Cálculo da função em si
	for(int i = 0; i <= range, i++){
		int y = arga * (i * i) + argb * i + argc;
		char *response = "\nx = %d || y = %d", i, y;
		fprintf(pointer, response);

	}

	// final
	free(y); free(response); free(cabecalho); // Excluir variáveis pré-feitas
	
}
