#include <stdio.h>

int DosNumIguales(int num1, int num2){ // Función para encontrar igualdad
    if (num1 == num2) {
        return 1;
    }
    else{
        return 0;
    }
}

int Mayor(int num1, int num2){ // Función para encontrar el mayor entre dos números
    return (num1 > num2) ? num1 : num2;
}

int MayorCuadrado(int num1, int num2){
    if(num1>num2){
    return num1*num1;
    }else{
    return num2*num2;
    }
}

int Factorial(int num){ // Función para calcular el factorial de un número
    if (num == 0) {
    return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int Cuadrado(int num){ // Función para sacar el cuadrado
    return num*num;
}

float SupRec(int base, int altura){ // Función para calcular la superficie de un rectángulo
    return (float)(base * altura);
}

float SupTrian(int base, int altura) { // Función para calcular la superficie de un triángulo
    return (float)(base * altura) / 2.0;
}

int NumPar(int num){ // Función para verificar si el número es par
    return (num % 2 == 0) ? 1 : 0;
}

int NumImpar(int num){ // Función para verificar si el número es impar
    return (num % 2 != 0) ? 1 : 0;
}

