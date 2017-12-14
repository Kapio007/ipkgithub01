#include "sphere.h"


#define PI 3.14159



    //constructor
    Sphere::Sphere() {};

    //set methods
    void Sphere::setRadius(double r) {radius = r;}

    // get methods
    double Sphere::getRadius() const {return radius;}
    double Sphere::getVolume() const {return (4 / 3) * PI * radius;}
    double Sphere::getSurfaceArea () const {return 4 * PI * radius;}
