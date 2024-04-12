#include <stdio.h>
#include "TDA_VECTOR.h"

int main(void){
    int N;
    printf("Ingrese longitud del vector: ");
    scanf("%d",&N);
    int *vector = (int *)malloc(N * sizeof(int)); // Asignación dinámica de memoria
    CargaVector(vector, N);
    VectorMenMay(vector, N); // Se ordena el vector de menor a mayor
    printf("\n1. Vector ordenado de forma ascendente: \n");
    ImprimirVector(vector, N); // Se imprime el vector ya ordenado
    VectorMayMen(vector, N); // Mismo proceso pero de mayor a menor
    printf("\n2. Vector ordenado de forma descendente: \n");
    ImprimirVector(vector, N);
    printf("\n3. Promedio de las posiciones impares: ");
    PromPosImpares(vector, N); //
    free(vector); // Liberar la memoria asignada dinámicamente
}

