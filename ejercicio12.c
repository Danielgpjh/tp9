#include <stdio.h>

void ingresarVentas(float ventas[4][7]);
void calcularTotalVentasPorSemana(float ventas[4][7], float totalVentas[4]);
void calcularPromedioVentasPorSemana(float ventas[4][7], float promedioVentas[4]);
int encontrarSemanaMayorVenta(float totalVentas[4]);

int main() {
    float ventas[4][7];
    float totalVentas[4];
    float promedioVentas[4];

    ingresarVentas(ventas);
    calcularTotalVentasPorSemana(ventas, totalVentas);
    calcularPromedioVentasPorSemana(ventas, promedioVentas);

    printf("a) Total de ventas de cada semana:\n");
    for (int semana = 0; semana < 4; semana++) {
        printf("Semana %d: %.2f\n", semana + 1, totalVentas[semana]);
    }

    printf("\nb) Promedio de ventas de cada semana:\n");
    for (int semana = 0; semana < 4; semana++) {
        printf("Semana %d: %.2f\n", semana + 1, promedioVentas[semana]);
    }

    int semanaMayorVenta = encontrarSemanaMayorVenta(totalVentas);
    printf("\nc) La semana con mayor venta es la semana %d.\n", semanaMayorVenta + 1);

    return 0;
}

void ingresarVentas(float ventas[4][7]) {
    printf("Ingrese las ventas de cada día de las últimas 4 semanas:\n");
    for (int semana = 0; semana < 4; semana++) {
        printf("Semana %d:\n", semana + 1);
        for (int dia = 0; dia < 7; dia++) {
            scanf("%f", &ventas[semana][dia]);
        }
    }
}


void calcularTotalVentasPorSemana(float ventas[4][7], float totalVentas[4]) {
    for (int semana = 0; semana < 4; semana++) {
        totalVentas[semana] = 0;
        for (int dia = 0; dia < 7; dia++) {
            totalVentas[semana] += ventas[semana][dia];
        }
    }
}


void calcularPromedioVentasPorSemana(float ventas[4][7], float promedioVentas[4]) {
    for (int semana = 0; semana < 4; semana++) {
        float total = 0;
        for (int dia = 0; dia < 7; dia++) {
            total += ventas[semana][dia];
        }
        promedioVentas[semana] = total / 7;
    }
}


int encontrarSemanaMayorVenta(float totalVentas[4]) {
    int semanaMayorVenta = 0;
    for (int semana = 1; semana < 4; semana++) {
        if (totalVentas[semana] > totalVentas[semanaMayorVenta]) {
            semanaMayorVenta = semana;
        }
    }
    return semanaMayorVenta;
}