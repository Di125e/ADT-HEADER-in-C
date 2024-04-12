#include <stdio.h>

int DosNumIguales(int num1, int num2){ // Funci�n para encontrar igualdad
    if (num1 == num2) {
        return 1;
    }
    else{
        return 0;
    }
}

int Mayor(int num1, int num2){ // Funci�n para encontrar el mayor entre dos n�meros
    return (num1 > num2) ? num1 : num2;
}

int MayorCuadrado(int num1, int num2){
    if(num1>num2){
    return num1*num1;
    }else{
    return num2*num2;
    }
}

int Factorial(int num){ // Funci�n para calcular el factorial de un n�mero
    if (num == 0) {
    return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int Cuadrado(int num){ // Funci�n para sacar el cuadrado
    return num*num;
}

float SupRec(int base, int altura){ // Funci�n para calcular la superficie de un rect�ngulo
    return (float)(base * altura);
}

float SupTrian(int base, int altura) { // Funci�n para calcular la superficie de un tri�ngulo
    return (float)(base * altura) / 2.0;
}

int NumPar(int num){ // Funci�n para verificar si el n�mero es par
    return (num % 2 == 0) ? 1 : 0;
}

int NumImpar(int num){ // Funci�n para verificar si el n�mero es impar
    return (num % 2 != 0) ? 1 : 0;
}

