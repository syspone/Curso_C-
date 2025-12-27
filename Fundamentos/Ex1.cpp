//
// Created by cmsouza on 26/12/2025.
//

#include "Ex1.h"

#include <iostream>
using namespace std;

/**
 *  Atividade:
 *  PI: 3.1415
 *  PI * radius * radius
 * @return
 */
int main () {

    const double PI = 3.1415;
    double RADIUS;

    // PI = 3.1415; // O valor de PI nao pode ser modificando quando sua variavel for constante
    cout << "Enter radius: ";
    cin >> RADIUS;

    double area = PI * RADIUS * RADIUS;
    cout << "Area is: "<< area;

    return 0;
}

