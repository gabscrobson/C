#include <stdio.h>

int main(void) {
    int acima = 0;
    float peso = 0, gordo = 0, magro = 0;

    // MUDAR PARA 90
    for (int i = 0; i < 90; i++) {

        printf("Peso do boi %d em kg: ", i+1);
        scanf("%f", &peso);

        if (i == 0) {
            gordo = peso;
            magro = peso;
        }

        if (peso > 500) {
            acima++;
        }

        if (peso > gordo) {
            gordo = peso;
        }

        if (peso < magro) {
            magro = peso;
        }

    }

    printf("Quantidade de bois acima de 500kg: %d\n", acima);
    printf("Peso do boi mais gordo: %.2f Kg\n", gordo);
    printf("Peso do boi mais magro: %.2f Kg\n", magro);

}