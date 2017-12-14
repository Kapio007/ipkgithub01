#include "cuboid.h"



#define PI 3.14159


double Cuboid::getWidth() {return width;}
double Cuboid::getHeight() {return height;}
double Cuboid::getLength() {return length;}
double Cuboid::getVolume() {return length * height * width;}
double Cuboid::getSurfaceArea() {return 2 * ((length * width) + (width * height) + (height * length));}

void Cuboid::setWidth(double w) {width = w;}
void Cuboid::setHeight(double h) {height = h;}
