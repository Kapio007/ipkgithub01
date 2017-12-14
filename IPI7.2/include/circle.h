#ifndef CIRCLE_H
#define CIRCLE_H


#define PI 3.14159
#include "sphere.h"

#include <stdio.h>

#endif /* circle_hpp */


class Circle : public Sphere {
public:

    Circle();

    double getArea();
    double getCircumference();

    // wir müssen die definieren da die Formeln sind anders für Kreise und Spheren
};
//#endif // CIRCLE_H
