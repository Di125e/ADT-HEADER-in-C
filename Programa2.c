#include <stdio.h>
#include "TDA_MATEMATICA.h"

int main(void){
    int num1, num2;
    float sup;
    printf("1. Ingrese dos numeros enteros separados por espacio: ");
    scanf("%d %d",&num1, &num2);
    DosNumIguales(num1, num2); // Se llama del header a la función de igualdad
    printf("   Los numeros son: %s.\n", DosNumIguales(num1, num2) ? "iguales" : "diferentes"); // si es 1, será iguales, si es 0, serán diferentes
    Mayor(num1, num2); // Se llama del header a la función para buscar el mayor
    printf("2. El mayor de los dos numeros es: %d.\n", Mayor(num1, num2));
    NumPar(num1); // Se llama a la función para ver si es par y se pasa como parámetro solamente el primer número
    printf("3. El primer numero es %s.\n", NumPar(num1) ? "par" : "impar");
    sup=SupTrian(num1, num2); //Se llama del header a la función para calcular la superficie del triangulo
    printf("4. La superficie del triangulo es: %.2f.\n",sup); //se imprime como decimal centésimo
    MayorCuadrado(num1, num2); //Se llama del header a la función para calcular el cuadrado del número mayor
    printf("5. El cuadrado del mayor es de: %d.\n",MayorCuadrado(num1, num2));
    return 0;
}
