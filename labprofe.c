#include <stdio.h>

#define FILAS 10
#define COLUMNAS 10

void mostrarLaberinto(char [FILAS][COLUMNAS]);
void tipomovimientoVF(int fila, int columna);
int calcularRutas(char [][COLUMNAS],int fila, int columna);
void jugar(char [][COLUMNAS]);

int main(){
    char laberinto[FILAS][COLUMNAS] = {
    {'A', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' '},
    {'#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#'},
    {' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', '#'},
    {' ', '#', '#', ' ', '#', '#', '#', ' ', '#', '#'},
    {'#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#'},
    {'#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#'},
    {' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' '},
    {' ', '#', '#', '#', '#', ' ', '#', '#', '#', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', 'B'}
    };
    printf("----- BUSCANDO EL CAMINO DEL LABERINTO RECURSIVO ---\n");
    printf("Buscando el camino desde A hasta B \n");
    mostrarLaberinto(laberinto);
    jugar(laberinto);
    return 0;
}

void mostrarLaberinto(char laberinto[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", laberinto[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}

void jugar(char laberinto[][FILAS]){
    if (calcularRutas(laberinto,0,0)== 1) {
        printf("Solución encontrada:\n");
        mostrarLaberinto(laberinto);
        } else {
            printf("No existe solución.\n");
        }
}

int calcularRutas(char laberinto[FILAS][COLUMNAS], int fila, int columna) {
    if (fila < 0 || fila >= FILAS || columna < 0 || columna >= COLUMNAS)
        return 0;

    if (laberinto[fila][columna] == 'B') 
        return 1;

    if (laberinto[fila][columna] != ' ' && laberinto[fila][columna] != 'A')
        return 0;

    laberinto[fila][columna] = 'O';

    if (calcularRutas(laberinto, fila + 1, columna)) return 1;
    if (calcularRutas(laberinto, fila, columna + 1)) return 1;
    if (calcularRutas(laberinto, fila - 1, columna)) return 1;
    if (calcularRutas(laberinto, fila, columna - 1)) return 1;

    laberinto[fila][columna] = '.';
    return 0;
}
