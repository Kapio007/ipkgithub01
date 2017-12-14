#include "circle.h"



#define PI 3.14159


Circle::Circle() {};

double Circle::getArea() {return PI * getRadius() * getRadius();}
double Circle::getCircumference() {return PI;}
