#include <stdio.h>

void leerInformacion(int habitantes[7][20][6]);
int calcularTotalHabitantes(int habitantes[7][20][6]);
void calcularHabitantesPorTorre(int habitantes[7][20][6], int habitantesPorTorre[7]);
float calcularPromedioHabitantesPorTorre(int habitantesPorTorre[7]);
float calcularPromedioHabitantesPorPiso(int habitantes[7][20][6]);

int main() {
    int habitantes[7][20][6];
    int habitantesPorTorre[7];

    leerInformacion(habitantes);
    int totalHabitantes = calcularTotalHabitantes(habitantes);
    calcularHabitantesPorTorre(habitantes, habitantesPorTorre);

    printf("i. Cantidad total de habitantes del complejo: %d\n", totalHabitantes);
    printf("ii. Cantidad total de habitantes por torre:\n");
    for (int i = 0; i < 7; i++) {
        printf("Torre %d: %d habitantes\n", i + 1, habitantesPorTorre[i]);
    }
    float promedioHabitantesPorTorre = calcularPromedioHabitantesPorTorre(habitantesPorTorre);
    printf("iii. Cantidad promedio de habitantes por torre: %.2f\n", promedioHabitantesPorTorre);
    float promedioHabitantesPorPiso = calcularPromedioHabitantesPorPiso(habitantes);
    printf("iv. Cantidad promedio de habitantes por piso: %.2f\n", promedioHabitantesByPiso);

    return 0;
}


void leerInformacion(int habitantes[7][20][6]) {
    printf("Ingrese la cantidad de habitantes en cada departamento:\n");
    for (int torre = 0; torre < 7; torre++) {
        for (int piso = 0; piso < 20; piso++) {
            for (int departamento = 0; departamento < 6; departamento++) {
                scanf("%d", &habitantes[torre][piso][departamento]);
            }
        }
    }
}


int calcularTotalHabitantes(int habitantes[7][20][6]) {
    int total = 0;
    for (int torre = 0; torre < 7; torre++) {
        for (int piso = 0; piso < 20; piso++) {
            for (int departamento = 0; departamento < 6; departamento++) {
                total += habitantes[torre][piso][departamento];
            }
        }
    }
    return total;
}

void calcularHabitantesPorTorre(int habitantes[7][20][6], int habitantesPorTorre[7]) {
    for (int torre = 0; torre < 7; torre++) {
        habitantesPorTorre[torre] = 0;
        for (int piso = 0; piso < 20; piso++) {
            for (int departamento = 0; departamento < 6; departamento++) {
                habitantesPorTorre[torre] += habitantes[torre][piso][departamento];
            }
        }
    }
}


float calcularPromedioHabitantesPorTorre(int habitantesPorTorre[7]) {
    int totalHabitantes = 0;
    for (int torre = 0; torre < 7; torre++) {
        totalHabitantes += habitantesPorTorre[torre];
    }
    return (float)totalHabitantes / 7;
}


float calcularPromedioHabitantesPorPiso(int habitantes[7][20][6]) {
    int totalHabitantes = calcularTotalHabitantes(habitantes);
    return (float)totalHabitantes / (7 * 20 * 6);
}