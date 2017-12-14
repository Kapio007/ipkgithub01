#ifndef CUBE_H
#define CUBE_H




#include <stdio.h>
#include "square.h"
#endif /* cube_hpp */


class Cube : public Square {
private:
    double side;

public:
    Cube();

    //methods
    void setSide();

    double getVolume();
    double getSurfaceArea();


};

//#endif // CUBE_H
