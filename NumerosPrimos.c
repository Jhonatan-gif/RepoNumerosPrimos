#include <stdio.h>

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }
    
    return 1;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    
    
    return 0;
}