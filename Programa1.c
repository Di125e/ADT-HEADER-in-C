#include <stdio.h>
#include "TDA_MATEMATICA.h"

int main(){
    int num;
    printf("Ingrese un numero para realizar su factorial: ");
    scanf("%d",&num);
    Factorial(num); // Se llama del header la función para calcular el factorial de un número
    printf("Resultado: %d\n",Factorial(num));
    printf("Ingrese un numero para sacar su cuadrado: ");
    scanf("%d",&num);
    Cuadrado(num); // Se llama del header la función para calcular el cuadrado de un número
    printf("Resultado: %d\n",Cuadrado(num));
    return 0;
}
