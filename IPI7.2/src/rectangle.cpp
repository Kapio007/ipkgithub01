#include "rectangle.h"



#define PI 3.14159





    //constructor
    Rectangle::Rectangle() {};

    //methods
    void Rectangle::setWidth(double w) {
        width = w;
    };
    void Rectangle::setHeight(double h) {
        height = h;

    };


    double Rectangle::getWidth() const { return width; };
    double Rectangle::getHeight() const { return height; };
    double Rectangle::getArea() const { return width * height; };
    double Rectangle::getCircumference() const { return 2 * (width + height); };

