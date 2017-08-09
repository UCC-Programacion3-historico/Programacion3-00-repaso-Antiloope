#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


#include "Color.h"

class Geometria {
protected:
    float ancho;
    float alto;
public:
    Color c;
    Geometria(float a, float b);
    virtual float getSuperficie()=0;
    virtual float getPerimetro()=0;
};


#endif //REPASO_GEOMETRIA_H
