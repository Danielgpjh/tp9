#include <stdio.h>


void leerMatriz(int matriz[10][10]);
void calcularSumaFilas(int matriz[10][10], int sumaFilas[10]);
void calcularSumaColumnas(int matriz[10][10], int sumaColumnas[10]);
void imprimirVectores(int vector[], int longitud, char nombre);

int main() {
    int matriz[10][10];
    int sumaFilas[10];
    int sumaColumnas[10];

    printf("Ingrese la matriz de 10x10:\n");
    leerMatriz(matriz);

    calcularSumaFilas(matriz, sumaFilas);
    calcularSumaColumnas(matriz, sumaColumnas);

    printf("Suma de filas:\n");
    imprimirVectores(sumaFilas, 10, 'F');

    printf("Suma de columnas:\n");
    imprimirVectores(sumaColumnas, 10, 'C');

    return 0;
}


void leerMatriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}


void calcularSumaFilas(int matriz[10][10], int sumaFilas[10]) {
    for (int i = 0; i < 10; i++) {
        sumaFilas[i] = 0;
        for (int j = 0; j < 10; j++) {
            sumaFilas[i] += matriz[i][j];
        }
    }
}


void calcularSumaColumnas(int matriz[10][10], int sumaColumnas[10]) {
    for (int j = 0; j < 10; j++) {
        sumaColumnas[j] = 0;
        for (int i = 0; i < 10; i++) {
            sumaColumnas[j] += matriz[i][j];
        }
    }
}


void imprimirVectores(int vector[], int longitud, char nombre) {
    for (int i = 0; i < longitud; i++) {
        printf("%c%d: %d\n", nombre, i + 1, vector[i]);
    }
    
    return 0;
}