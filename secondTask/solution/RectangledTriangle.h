//
// Created by Kyrylo on 10.09.2023.
//

#ifndef CPP_RECTANGLEDTRIANGLE_H
#define CPP_RECTANGLEDTRIANGLE_H

#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;


class RectangledTriangle {
    int cathetus0, cathetus1;

public:

    RectangledTriangle(int c0, int c1) {
        cathetus0 = c0;
        cathetus1 = c1;
    }

    void printData(void) {
        cout << "First cathetus = " << cathetus0 << "\t";
        cout << "Second cathetus = " << cathetus1 << "\t";
        cout << "Area = " << area() << endl;
    }

    int area(void) {
        int result = sqrt(pow(cathetus0, 2) + pow(cathetus1, 2));

        return result;
    }

};


#endif //CPP_RECTANGLEDTRIANGLE_H
