#include "cube.h"




Cube::Cube() {};
#define PI 3.14159

//Cube::Cube() {};

void Cube::setSide() {
    side = getArea();
}

double Cube::getVolume() {
    return getArea() * getArea() * getArea();
}

double Cube::getSurfaceArea() {
    return getArea() * getArea() * 6;
}

