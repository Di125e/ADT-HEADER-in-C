#include <stdio.h>
#include "TDA_MATEMATICA.h"

int main(void){
    int num1, num2;
    float sup;
    printf("1. Ingrese dos numeros enteros separados por espacio: ");
    scanf("%d %d",&num1, &num2);
    DosNumIguales(num1, num2); // Se llama del header a la funci�n de igualdad
    printf("   Los numeros son: %s.\n", DosNumIguales(num1, num2) ? "iguales" : "diferentes"); // si es 1, ser� iguales, si es 0, ser�n diferentes
    Mayor(num1, num2); // Se llama del header a la funci�n para buscar el mayor
    printf("2. El mayor de los dos numeros es: %d.\n", Mayor(num1, num2));
    NumPar(num1); // Se llama a la funci�n para ver si es par y se pasa como par�metro solamente el primer n�mero
    printf("3. El primer numero es %s.\n", NumPar(num1) ? "par" : "impar");
    sup=SupTrian(num1, num2); //Se llama del header a la funci�n para calcular la superficie del triangulo
    printf("4. La superficie del triangulo es: %.2f.\n",sup); //se imprime como decimal cent�simo
    MayorCuadrado(num1, num2); //Se llama del header a la funci�n para calcular el cuadrado del n�mero mayor
    printf("5. El cuadrado del mayor es de: %d.\n",MayorCuadrado(num1, num2));
    return 0;
}
