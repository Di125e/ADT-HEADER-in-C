#include <stdio.h>

void CargaVector(int vector[], int N) { // Función para cargar el vector
    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Ingrese el #%d numero: ", i+1); // La posición visual del vector parte del 1
        scanf("%d", &vector[i]);
    }
}

void ImprimirVector(int vector[], int N) { // Función para imprimir el vector
    for (int i = 0; i < N; i++) {
        printf("   pos: %d valor: %d\n", i+1, vector[i]);
    }
}

int VectorMenMay(int vector[], int N) { // Función encargada de ordenar el vector de menor a menor
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) { // se crean dos bucles, uno irá por adelante del otro
            if (vector[j] > vector[j + 1]) { // si el valor de j es mayor que el siguiente valor de j
                temp = vector[j];           // TEMP guardará ese mismo valor
                vector[j] = vector[j + 1]; // el mismo valor pasa a la siguiente posición
                vector[j + 1] = temp;     // y TEMP pasará a ser el nuevo valor a nivel jerarquico
            }
        }
    }
}

int VectorMayMen(int vector[], int N) { // Funcion encargada de ordenar el vector de mayor a mayor
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vector[j] < vector[j + 1]) { // Esta vez, se pasará el valor menor, para que quede primero el valor mayor
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int PromPosImpares(int vector[], int N) { // Función para realizar el promedio de las posiciones impares
    int suma = 0;
    int contador = 0;
    for (int i = 0; i < N; i += 2) { // La posición visual del vector parte del 1, por lo tanto se invierte (0=impar, 1=par)
        suma += vector[i];
        contador++;
    }
    printf("%.2f\n", (float)suma / contador);  // Se imprime en la función para mostrarlo como float en el programa
}

int PromPosPares(int vector[], int N) { // Función para realizar el promedio de las posiciones pares
    int suma = 0;
    int contador = 0;
    for (int i = 1; i < N; i += 2) {
        suma += vector[i];
        contador++;
    }
    printf("%.2f\n", (float)suma / contador);
}
