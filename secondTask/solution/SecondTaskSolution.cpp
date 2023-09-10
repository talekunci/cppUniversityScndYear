//
// Created by Kyrylo on 10.09.2023.
//

#include "RectangledTriangle.h"

int main() {
    RectangledTriangle t(3, 4);

    t.printData();
    cout << "Triangle's area method result = " << t.area() << endl;

    return 0;
}
