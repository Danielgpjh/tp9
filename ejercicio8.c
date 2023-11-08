#include <stdio.h>

void leerMatriz(int matriz[5][6]);
int contarNegativos(int matriz[5][6]);
int contarCerosDiagonal(int matriz[5][6]);

int main() {
    int matriz[5][6];

    printf("Introduce los elementos de la matriz de 5x6:\n");
    leerMatriz(matriz);

    int numNegativos = contarNegativos(matriz);
    int numCerosDiagonal = contarCerosDiagonal(matriz);

    printf("Número de elementos negativos: %d\n", numNegativos);
    printf("Número de elementos en la diagonal principal iguales a cero: %d\n", numCerosDiagonal);

    return 0;
}


void leerMatriz(int matriz[5][6]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}


int contarNegativos(int matriz[5][6]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] < 0) {
                count++;
            }
        }
    }
    return count;
}


int contarCerosDiagonal(int matriz[5][6]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (matriz[i][i] == 0) {
            count++;
        }
    }
    return count;

}


