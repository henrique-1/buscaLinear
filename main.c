#include <stdio.h>
#include <stdlib.h>
#include "createArray.h"
#include "printArray.h"
#include "buscador.h"

int main() {
    printf("\tProjeto e Análise de Algoritmos\n");
    printf("\tListEx 02 | Busca Linear\n");

    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));
    geraArrayAleatorio(arrayOriginal, n);

    printArray(arrayOriginal, "Array gerado", n);

    printf("Digite o valor que deseja buscar no array\n");
    printf("> ");
    scanf("%d", &v);

    buscaLinear(arrayOriginal, n, v);

    return 0;
}
