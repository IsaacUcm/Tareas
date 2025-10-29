#include <stdio.h>

unsigned long long factorial(unsigned int);

int main(){
    unsigned int numero;
    long long resultado;
    printf("Ingrese el numero: \n");
    scanf("%d", &numero);
    resultado = factorial(numero); 
    printf("El factorial de dicho numero es %llu\n", resultado);
    return 0;
}

unsigned long long factorial(unsigned int n){
    if (n == 0)
        return 1;
    else 
        return n * factorial(n-1); 
}