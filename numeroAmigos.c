#include <stdio.h>

void encontrarAmigo();
int sumaDivisores(int);


int main() {
    encontrarAmigo();
    return 0;
}

void encontrarAmigo(){
    int n, m;
    for (m = 1000; m <= 1500; m++) {
        n = sumaDivisores(m);
        if (n > m) {
            if (sumaDivisores(n) == m)
                printf("Par amigable entre 1000 y 1500: %d, %d\n", m, n);
        }
    }

}

int sumaDivisores(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) { //Se calcula solo hasta la mitad del numero, ya que los siguientes no dividen perfectamente al numero. 
        if (num % i == 0)
            suma += i;
    }
    return suma;
}