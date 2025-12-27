//
// Created by cmsouza on 26/12/2025.
//

#include "io.h"

#include <algorithm>
#include <iostream>
#include <ostream>
using namespace std;

int main () {

    // insertion operator
    cout << "HI!\n" << endl;
    cout << 3.14 << endl;

    int x = 3;
    cout << x << endl;
    cout << "Enter you name: ";

    // extraction operator
    string name;
    cin >> name;

    // insert operator
    cout << name;
    return 0;
}