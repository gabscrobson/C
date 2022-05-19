// Exercício 18 da primeira lista de Prog1
#include <stdio.h>

float getCelestial(int choice, float mass);
int main(void) {

    // Declaring variables
    int choice;
    float mass;

    // Scanning celestial choice
    printf("---------------------------------------\n        Escolha o corpo celeste        \n[0]Mercúrio                  [5]Júpiter\n[1]Vênus                     [6]Saturno\n[2]Marte                     [7]Urano\n[3]Lua                       [8]Netuno\n[4]Terra                     [9]Plutão\n---------------------------------------\n---> ");
    do {
        scanf("%d", &choice);
    }
    while(choice < 0 || choice > 9);

    // Scanning users mass
    printf("Seu peso em Kg: ");
    scanf("%f", &mass);

    float newMass = getCelestial(choice, mass);

    printf("---------------------------------------\nMassa no corpo celeste escolhido: %.2f Kg\n---------------------------------------\n", newMass);
}

float getCelestial(int choice, float mass) {
    float result = 0;

    // Mercury
    if (choice == 0) {
        result = mass * 0.3649;
    }

    // Venus
    else if (choice == 1) {
        result = mass * 0.9041;
    }

    // Mars
    else if (choice == 2) {
        result = mass * 0.3812;
    }

    // Moon
    else if (choice == 3) {
        result = mass * 0.1651;
    }

    // Earth
    else if (choice == 4) {
        result = mass;
    }

    // Jupiter
    else if (choice == 5) {
        result = mass * 2.6513;
    }

    // Saturn
    else if (choice == 6) {
        result = mass * 1.1386;
    }

    // Uran
    else if (choice == 7) {
        result = mass * 1.0693;
    }

    // Netune
    else if (choice == 8) {
        result = mass * 1.3506;
    }

    // Pluto
    else {
        result = mass * 0.2252;
    }

    return result;
}
