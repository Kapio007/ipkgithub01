#ifndef SPHERE_H
#define SPHERE_H


#ifndef sphere_hpp
#define sphere_hpp

#define PI 3.14159
#include <stdio.h>

#endif /* sphere_hpp */



class Sphere {
private:
    double radius;

public:

    //constructor
    Sphere();

    //set methods
    void setRadius(double r);

    // get methods
    double getRadius() const;
    double getVolume() const;
    double getSurfaceArea() const;
};


#endif // SPHERE_H
