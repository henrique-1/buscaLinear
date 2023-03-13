#include <stdio.h>
#include "buscador.h"
#include "numOps.h"

void buscaLinear(int arrayOriginal[], int n, int v){
    numOperations = 0;
    int found = 0;

    for(int i = 0; i < n; i++){
        numOperations++;


        if(arrayOriginal[i] == v){
            numOperations++;

            printf("O valor [%d], foi encontrado na posição %d", v, (i + 1));

            showOperations(numOperations);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("O valor [%d] não pode ser encontrado no array", v);

        showOperations(numOperations);
    }

}
