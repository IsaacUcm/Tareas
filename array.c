#include <stdio.h>

void leer_datos(int, int []);
void maximo_minimo(int,int [],int *,int *);
int main(){
    int num[50];
    int n, min, max;
    printf("Cuantos numeros quiere escribir en el arreglo?: \n");
    scanf("%d", &n);
    leer_datos(n,num);
    printf("Numeros ingresados: \n");
    for(int i = 0; i < n; i++){
        printf("|%3d|", num[i]);
    }
    maximo_minimo(n,num,&min,&max);
    printf("    Maximo: %d  Minimo: %d\n", max, min);
    return 0;
}

void leer_datos(int n,int num[50]){
    int i;
    for(i = 0; i < n;i++){
        printf("Ingrese el %d numero: \n", i+1);
        scanf("%d", &num[i]);
    }
}
void maximo_minimo(int n,int num[50],int *min,int *max){
    int i;
    *min = num[0];
    *max = 0;
    for(i = 0; i < n; i++){
        if(*min >= num[i]) *min = num[i];
        if(*max <= num[i]) *max = num[i];
    }
}