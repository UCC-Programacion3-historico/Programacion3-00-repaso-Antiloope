#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H


#include "Geometria.h"

class Cuadrado : public Geometria {
public:
    Cuadrado(float a, float b);

    float getDiagonal();
    virtual float getPerimetro();
    virtual float getSuperficie();
};


#endif //REPASO_CUADRADO_H
