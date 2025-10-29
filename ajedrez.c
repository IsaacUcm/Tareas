#include <stdio.h>

void leerCoordenada(int *, int *);
void calcularMovimientos(int [][8], int, int);
void mostrarPosiciones(int [][8]);

int main(){
    int tablero[8][8] = {0};
    int posX, posY;
    leerCoordenada(&posX, &posY);
    calcularMovimientos(tablero, posX, posY);
    mostrarPosiciones(tablero);
    return 0;
}

void leerCoordenada(int *x, int *y){
    printf("Ingrese la posicion horizontal(del 1 al 8): \n");
    scanf("%d", x);
    while (*x > 8 || *x < 1){
        printf("Ingrese un numero valido: \n");
        scanf("%d", x);
    }
    printf("Ingrese la posicion vertical(del 1 al 8): \n");
    scanf("%d", y);
    while (*y > 8 || *y < 1){
        printf("Ingrese un numero valido: \n");
        scanf("%d", y);
    }
}

void calcularMovimientos(int arr[][8],int x,int y){
    x = x-1;
    y = y-1;
    arr[x][y] = 1;
    if (x+2 >= 0 && x+2 < 8 && y+1 >= 0 && y+1 < 8)
        arr[x+2][y+1] = 2;
    if (x+2 >= 0 && x+2 < 8 && y-1 >= 0 && y-1 < 8) 
        arr[x+2][y-1] = 2;
    if (x-2 >= 0 && x-2 < 8 && y+1 >= 0 && y+1 < 8) 
        arr[x-2][y+1] = 2;
    if (x-2 >= 0 && x-2 < 8 && y-1 >= 0 && y-1 < 8) 
        arr[x-2][y-1] = 2;
    if (x+1 >= 0 && x+1 < 8 && y+2 >= 0 && y+2 < 8) 
        arr[x+1][y+2] = 2;
    if (x-1 >= 0 && x-1 < 8 && y+2 >= 0 && y+2 < 8) 
        arr[x-1][y+2] = 2;
    if (x-1 >= 0 && x-1 < 8 && y-2 >= 0 && y-2 < 8) 
        arr[x-1][y-2] = 2;
    if (x+1 >= 0 && x+1 < 8 && y-2 >= 0 && y-2 < 8) 
        arr[x+1][y-2] = 2;
}

void mostrarPosiciones(int arr[][8]){
    printf("El caballo se mostrara como 1 y sus posibles movimientos con un 2\n");
    for(int i =0; i< 8;i++){
        for(int j = 0; j < 8; j++){
            printf("|%2d  |", arr[i][j]);
        }
        printf("\n");
    }
}
