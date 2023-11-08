#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarMatriz(int matriz[4][4]);
void mostrarMatriz(int matriz[4][4]);
int contarCeros(int matriz[4][4]);

int main() {
    int matriz[4][4];
    srand(time(NULL)); 

    llenarMatriz(matriz);
    printf("Matriz generada:\n");
    mostrarMatriz(matriz);

    int numCeros = contarCeros(matriz);
    printf("Cantidad de ceros en la matriz: %d\n", numCeros);

    return 0;
}


void llenarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10; 
        }
    }
}


void mostrarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}


int contarCeros(int matriz[4][4]) {
    int numCeros = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == 0) {
                numCeros++;
            }
        }
    }
    return numCeros;
}