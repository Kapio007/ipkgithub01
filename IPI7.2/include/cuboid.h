#ifndef CUBOID_H
#define CUBOID_H

#include <stdio.h>

#endif /* cuboid_hpp */


class Cuboid {
private:
    double width;
    double height;
    double length;

public:
    double getWidth();
    double getHeight();
    double getLength();
    double getVolume();
    double getSurfaceArea();

    void setWidth(double w);
    void setHeight(double h);
    void setLength(double l);

};
//#endif // CUBOID_H
