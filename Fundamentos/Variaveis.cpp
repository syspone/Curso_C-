//
// Created by cmsouza on 22/12/2025.
//

#include "Variaveis.h"

#include <cstdio>

int main () {

    // type identifier = value
    double price = 99.80; // Price origin
    double tax = 0.08;    // tax rate

    // Calculate final price by adding tax
    double finalPrice = price * (1 + tax);

    printf("The final price is %.2f. ", finalPrice); // %.2f formata o número para mostrar apenas 2 casas decimais.
    return 0;
}
