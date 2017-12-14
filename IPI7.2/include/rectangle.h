#ifndef RECTANGLE_H
#define RECTANGLE_H


#include <stdio.h>

#endif /* rectangle_hpp */


class Rectangle {
private:
    double width;
    double height;


public:

    //constructor
    Rectangle();

    //methods
    void setWidth(double w);
    void setHeight(double h);

    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    double getCircumference() const;

};


//#endif // RECTANGLE_H
