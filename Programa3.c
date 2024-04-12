#include <stdio.h>
#include "TDA_VECTOR.h"

int main(void){
    int N;
    printf("Ingrese longitud del vector: ");
    scanf("%d",&N);
    int *vector = (int *)malloc(N * sizeof(int)); // Asignación dinámica de memoria
    CargaVector(vector, N); // Se llama a la función de carga del header
    printf("\n1. Promedio de las posiciones pares: ");
    PromPosPares(vector, N); // Se llama a la función con su respectivo printf
    VectorMenMay(vector, N); // Se llama a la función de orden de menor a mayor del header
    printf("\n2. Vector ordenado: \n");
    ImprimirVector(vector, N); // Se imprime una vez ordenado
    free(vector); // Liberamos la memoria asignada dinámicamente
    return 0;
}

