#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


#include "Geometria.h"

class Triangulo : public Geometria {
private:
    int angulo;
public:
    Triangulo(float a, float b, int an);
    int getAngulo();
    virtual float getPerimetro();
    virtual float getSuperficie();
};


#endif //REPASO_TRIANGULO_H
