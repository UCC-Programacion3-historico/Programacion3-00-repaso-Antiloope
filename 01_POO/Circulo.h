#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H


#include "Geometria.h"

class Circulo : public Geometria{
private:
    int radio;
public:
    Circulo(float a, float b, int r);

    int getRadio();
    virtual float getPerimetro();
    virtual float getSuperficie();
};


#endif //REPASO_CIRCULO_H
