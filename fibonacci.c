#include <stdio.h>

unsigned long long fibonacci (unsigned int);

int main(){
    unsigned long long resultado;
    unsigned long long numero; 
    printf("Ingrese un numero: \n");
    scanf("%llu", &numero);
    resultado = fibonacci(numero);
    printf("Fibonacci: %llu\n", resultado);

    return 0;
}

unsigned long long fibonacci (unsigned int n){
    if (n == 1 || n ==2 ) return 1;
    else return fibonacci(n - 1)+ fibonacci(n -2);
}