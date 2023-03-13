#include <stdlib.h>
#include <time.h>
#include "createArray.h"

/* Função geraArrayAleatorio() define números aleatórios de 0 a 100 para um array específico */
void geraArrayAleatorio(int arrayOriginal[], int n){
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arrayOriginal[i] = rand() % 100 + 1;
    }
}