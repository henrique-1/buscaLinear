#include <stdio.h>
#include <stdlib.h>
#include "createArray.h"
#include "printArray.h"

int main() {
    printf("\tProjeto e Análise de Algoritmos\n");
    printf("\tListEx 02 | Busca Linear\n");

    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));
    geraArrayAleatorio(arrayOriginal, n);

    printArray(arrayOriginal, "Array gerado automaticamente", n);

    return 0;
}
